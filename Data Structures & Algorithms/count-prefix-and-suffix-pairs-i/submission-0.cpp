class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        auto pairs{0};

        for (auto i{0uz}; i < words.size(); ++i) {
            for (auto j{i + 1}; j < words.size(); ++j) {
                if (words[j].starts_with(words[i]) && words[j].ends_with(words[i])) {
                    pairs++;
                }
            }
        }

        return pairs;
    }
};