class Solution {
public:
    int lengthOfLastWord(string s) {
        auto end{static_cast<int>(s.size() - 1)};
        while (end >= 0 && !isalpha(s[end--]));
        if (end == -1) {
            return 0;
        }

        auto space{end};
        while (space >= 0 && s[space--] != ' ');
        if (space == -1) {
            return end + 1;
        }

        return end - space;
    }
};