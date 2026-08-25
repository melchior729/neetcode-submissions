class Solution {
public:
    int countSeniors(vector<string>& details) {
        auto seniors{0};

        for (const auto &s : details) {
            seniors += stoi(s.substr(11, 2)) > 60;
        }

        return seniors;
    }
};