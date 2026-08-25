class Solution {
public:
    int scoreOfString(string s) {
        auto score{0};
        for (auto i{1uz}; i < s.length(); ++i) {
            score += abs(s[i] - s[i - 1]);
        }    

        return score;
    }
};