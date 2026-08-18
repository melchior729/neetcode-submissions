class Solution {
public:
    int scoreOfString(string s) {
        auto sum{0};

        auto left{0};
        for (auto right{1}; right < s.size(); ++right) {
            sum += abs(s[right] - s[left]);
            ++left;

        }       

        return sum;
    }
};