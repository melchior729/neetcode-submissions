class Solution {
   public:
    int countPrefixSuffixPairs(vector<string>& words) {
        auto n{static_cast<int>(words.size())};
        auto pairs{0};

        for (auto i{0}; i < n; ++i) {
            for (auto j{i + 1}; j < n; ++j) {
                if (words[j].starts_with(words[i]) && words[j].ends_with(words[i])) {
                    pairs++;
                }
            }
        }

        return pairs;
    }
};