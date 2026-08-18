class Solution {
   public:
    bool isSubsequence(string s, string t) {
        auto left{0};

        for (auto right{0}; right < t.size(); ++right) {
            if (left == s.size()) {
                break;
            }

            if (s[left] == t[right]) {
                ++left;
            }
        }

        return s.size() == left;
    }
};