class Solution {
   public:
    int minOperations(vector<string>& logs) {
        auto steps{0};

        for (const auto& log : logs) {
            auto location{log.substr(0, log.size() - 1)};
            if (location == "..") {
                if (steps > 0) {
                    steps--;
                }
            } else if (location == ".") {
                continue;
            } else {
                steps++;
            }
        }

        return steps;
    }
};