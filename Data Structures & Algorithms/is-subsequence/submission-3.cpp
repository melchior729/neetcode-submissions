class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto L{0};

        for (auto R{0}; R < t.size(); ++R) {
            if (s[L] == t[R]) {
                L++;
            }
        }

        return L == s.size();
    }
};