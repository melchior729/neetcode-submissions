class Solution {
public:
    bool isPalindrome(string s) {
        auto size{s.length()};
        auto left{0uz};
        auto right{size - 1};

        while (left < right) {
            while (!isalnum(s[left])) {
                left++;
            }

            while (!isalnum(s[right])) {
                right--;
            }

            if (left >= right || right > size - 1) {
                break;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                cout << left << "\n";
                cout << right;
                return false;
            }

            left++;
            right--;
        }    

        return true;
    }
};
