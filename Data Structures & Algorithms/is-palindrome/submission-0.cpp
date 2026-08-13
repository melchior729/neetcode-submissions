class Solution {
public:
    bool isPalindrome(string s) {
        string str{};
        for (const auto c : s) {
            if (isalpha(c)) {
                str += tolower(c);
            }

            else if (isdigit(c)) {
                str += c;
            }
        }

        cout << str;

        auto size{str.length()};
        for (auto i{0uz}; i < size / 2; ++i) {
            if (str[i] != str[size - i - 1]) {
                return false;
            }
        }

        return true;
    }
};
