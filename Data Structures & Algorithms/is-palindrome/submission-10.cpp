class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return false;
        }

        auto size{s.length()};
        auto left{0uz};
        auto right{size - 1};

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            while (left < right && !isalnum(s[right])) {
                right--;
            }

            if (left >= right) {
                break;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }    

        return true;
    }
};
