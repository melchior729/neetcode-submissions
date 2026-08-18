class Solution {
   public:
    int maxNumberOfBalloons(string text) {
        array<int, 5> occur{};
        occur.fill(0);

        for (const auto &c : text) {
            if (c == 'a') {
                occur[0]++;
            } else if (c == 'b') {
                occur[1]++;
            } else if (c == 'l') {
                occur[2]++;
            } else if (c == 'n') {
                occur[3]++;
            } else if (c == 'o') {
                occur[4]++;
            }
        }

        occur[2] /= 2;
        occur[4] /= 2;

        auto min_count{static_cast<int>(text.size())};
        for (const auto &c : occur) {
            if (c == 0) {
                return 0;
            }

            min_count = min(min_count, c);
        }

        return min_count;
    }
};