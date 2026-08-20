class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        auto res{""s};
        res.reserve(word1.size() + word2.size());

        auto min_len(min(word1.size(), word2.size()));
        auto i{0uz};

        for (; i < min_len; i++) {
            res += word1[i];
            res += word2[i];
        }

        res.append(word1.substr(i));
        res.append(word2.substr(i));

        return res;
    }
};