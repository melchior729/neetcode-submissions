class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        /*

        res = ""
        min_len = min(len(word1), len(word2))

        i = 0
        for i < min_len, i++:
            res += word1[i]
            res += word2[i]
        
        if len(word1) == len(word2):
            return res
        
        st = len(word1) < len(word2) ? word2.substr(i, len(word2) - i) : word1.substr(i, len(word1) - i)
        return res + st
        */

        auto res{""s};
        auto min_len(min(word1.size(), word2.size()));

        auto i{0uz};
        for (; i < min_len; ++i) {
            res += word1[i];
            res += word2[i];
        }

        auto st{""s};
        if (word1.size() != word2.size()) {
            st = word1.size() < word2.size() ? word2.substr(i, word2.size() - i) : word1.substr(i, word1.size() - i);
        }

        return res + st;
    }
};