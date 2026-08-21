// started at 20:56

class Solution {
   public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        /*

        words = ["aba","bcb","ece","aa","e"]

        queries = [
            [0,2],
            [1,4],
            [1,1]
        ]

        num_vstrts = [1, 1, 2, 3, 4]

        output: [2, 3, 0]
        ======

        vowels = ['a', 'e', 'i', 'o', 'u']

        # number of v strings @ i
        num_vstrs = [] * len(words)

        num = 0
        for i, word in words:
            if word[0] in vowels AND word[-1] in vowels:
                num++

            num_vstrs[i] = num

        res = [] * len(queries)

        for i, query in queries:
            before = num_vstrs[query.li - 1] if query.li > 0 else 0
            res[i] = num_vstrs[query.ri] - before
        
        return res

        finished reasoning & python at 21:17

        =============================================

        did not need this, just turned this into lambda
        array<char, 5> vowels = {'a', 'e', 'i', 'o', 'u'};
        */

        vector<int> num_vstrs(words.size());

        auto num{0};
        for (auto i{0uz}; i < words.size(); ++i) {
            // fixed this to make it const auto&, no copy
            const auto &word{words[i]};

            auto is_vowel = [](char c) {
                return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
            };

            if (is_vowel(word.front()) && is_vowel(word.back())) {
                num++;
            }

            num_vstrs[i] = num;
        }

        vector<int> res(queries.size());

        for (auto i{0uz}; i < queries.size(); ++i) {
            auto query{queries[i]};
            auto before{query[0] > 0 ? num_vstrs[query[0] - 1] : 0};
            res[i] = num_vstrs[query[1]] - before;
        }

        return res;

        // finished first submission @ 21:24
        // passed first try at 23ms (70.63 percentile), memory (74.13 percentile)
    }
};