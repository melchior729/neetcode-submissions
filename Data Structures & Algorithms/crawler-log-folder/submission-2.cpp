class Solution {
public:
    int minOperations(vector<string>& logs) {
        auto level{0};

        for (const auto &log : logs) {
            auto dest{log.substr(0, log.length() - 1)};
            if (dest == "..") {
                level = max(0, level - 1);
            } else if (dest != ".") {
                level++;
            }
        }

        return level;
    }
};