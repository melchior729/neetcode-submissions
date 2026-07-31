class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, size_t> indices{};
        vector<vector<string>> anagrams{};

        for (const auto& str : strs) {
            auto sorted{str};
            std::sort(sorted.begin(), sorted.end());

            if (!indices.contains(sorted)) {
                anagrams.push_back({});
                indices[sorted] = anagrams.size() - 1;
            }

            anagrams[indices[sorted]].push_back(str);
        }

        return anagrams;
    }
};
