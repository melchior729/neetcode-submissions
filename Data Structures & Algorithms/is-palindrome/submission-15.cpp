class Solution {
   public:
    bool isPalindrome(string s) {
        auto n{s.size()};

        auto L{0};
        auto R{n - 1};

        while (L < R && !isalnum(s[L])) {
            L++;
        }

        while (L < R && !isalnum(s[R])) {
            R--;
        }

        if (L == R) {
            return true;
        }

        while (L < R) {
            while (L < R && !isalnum(s[L])) {
                L++;
            }

            while (L < R && !isalnum(s[R])) {
                R--;
            }

            if (tolower(s[L]) != tolower(s[R])) {
                return false;
            }

            L++;
            R--;
        }

        return true;
    }
};
