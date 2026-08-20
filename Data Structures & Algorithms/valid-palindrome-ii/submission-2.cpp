class Solution {

    bool is_palindrome(const string& s, int L, int R) {
        while (L < R) {
            if (s[L] != s[R]) {
                return false;
            }

            L++;
            R--;
        }

        return true;
    }

   public:
    bool validPalindrome(string s) {
        auto n{s.size()};
        auto L{0};
        auto R{n - 1};

        while (L < R) {
            if (s[L] != s[R]) {
                return is_palindrome(s, L + 1, R) || is_palindrome(s, L, R - 1);
            }

            L++;
            R--;
        }

        return true;
    }
};