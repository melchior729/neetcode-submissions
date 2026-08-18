class Solution {
public:
    int lengthOfLastWord(string s) {
        auto length{0};

        for (auto i{s.size()}; i --> 0;) {
            if (s[i] == ' ' && length > 0) {
                break;
            }

            if (s[i] != ' ') {
                ++length;
            }
        }

        return length; 
    }
};