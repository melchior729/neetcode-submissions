class Solution {
public:
    int minOperations(vector<string>& logs) {
        auto level{0};

        for (const auto &log : logs) {
            auto dest{log.substr(0, log.length() - 1)};
            if (dest == ".." && level > 0) {
                level--;
            } else if (dest != ".") {
                level++;
            }
        }

        return level;
    }
};