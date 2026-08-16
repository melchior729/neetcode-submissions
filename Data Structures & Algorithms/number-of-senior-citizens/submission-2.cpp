class Solution {
public:
    int countSeniors(vector<string>& details) {
        auto seniors{0};
        for (const auto &passenger : details) {
            auto first{passenger[11] - '0'};
            auto second{passenger[12] - '0'};

            auto age{10 * first + second};
            if (age > 60) {
                seniors++;
            }
        }

        return seniors;
    }
};