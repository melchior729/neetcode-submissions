class Solution {
public:
    int lengthOfLastWord(string s) {
        auto last_char_i{-1};
        auto space_before_word_i{-1};

        auto i{s.size()};
        for (; i --> 0;) {
            auto c{s[i]};

            if (last_char_i == -1 && c != ' ') {
                last_char_i = i;
            }

            if (last_char_i != -1 && c == ' ') {
                break;
            }
        }

        return last_char_i - i;
    }
};