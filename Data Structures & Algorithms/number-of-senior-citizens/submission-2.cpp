class Solution {
public:
    int countSeniors(vector<string>& details) {
        auto seniors{0};

        for (const auto &s : details) {
            seniors += 10 * (s[11] - '0') + s[12] - '0' > 60;
        }

        return seniors;
    }
};