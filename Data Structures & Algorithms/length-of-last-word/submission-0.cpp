class Solution {
public:
    int lengthOfLastWord(string s) {
        auto last_char_i{-1};
        auto space_before_word_i{-1};

        for (auto i{s.size()}; i --> 0;) {
            auto c{s[i]};

            if (last_char_i == -1 && c != ' ') {
                last_char_i = i;
            }

            if (last_char_i != -1 && c == ' ') {
                space_before_word_i = i;
                break;
            }
        }

        return s.substr(space_before_word_i + 1, last_char_i - space_before_word_i).size();
    }
};