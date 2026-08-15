class Solution {
public:
    bool isPalindrome(string s) {
        auto left{0uz}, right{s.length() - 1};

        while (left < right) {
            while (left < right && !isalnum(s[right])) {
               right--; 
            }

            while (left < right && !isalnum(s[left])) {
                left++;
            }

            if (left == right) {
                break;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                cout << s[left] << " " << s[right];
                return false;
            }

            left++;
            right--;
        }    

        return true;
    }
};
