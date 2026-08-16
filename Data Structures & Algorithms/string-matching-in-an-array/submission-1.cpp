class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> matching{};

        for (const auto &word : words) {
            for (const auto &check : words) {
                if (word != check && check.contains(word)) {
                    matching.push_back(word);
                    break;
                }
            }
        }

        return matching;
    }
};