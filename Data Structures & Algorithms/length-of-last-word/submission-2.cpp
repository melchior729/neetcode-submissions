class Solution {
public:
    int lengthOfLastWord(string s) {
        auto end{static_cast<int>(s.size() - 1)};
        while (end >= 0 && !isalpha(s[end])) {
            end--;
        }

        auto space{end};
        while (space >= 0 && s[space] != ' ') {
            space--;
        }

        return end - space;
    }
};