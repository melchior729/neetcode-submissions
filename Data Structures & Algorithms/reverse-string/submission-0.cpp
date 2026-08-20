class Solution {
public:
    void reverseString(vector<char>& s) {
        auto n{s.size()};
        for (auto i{0uz}; i < n / 2; ++i) {
            swap(s[i], s[n - i - 1]);
        }
    }
};