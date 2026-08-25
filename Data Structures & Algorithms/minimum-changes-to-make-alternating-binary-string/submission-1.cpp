class Solution {
public:
    int minOperations(string s) {
        auto ops{0};

        for (auto i{0uz}; i < s.length(); ++i) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    ++ops;
                }
            } else {
                if (s[i] == '1') {
                    ++ops;
                }
            }
        }

        return min(ops, static_cast<int>(s.length()) - ops);
    }
};