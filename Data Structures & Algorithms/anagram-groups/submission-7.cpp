class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams{};
        unordered_map<string, size_t> indices{};

        for (const auto& str : strs) {
            auto sorted{str};
            std::sort(sorted.begin(), sorted.end());

            auto it{indices.find(sorted)};
            if (it != indices.end()) {
                anagrams[it->second].push_back(str);
            } 
            
            else {
                anagrams.push_back({});
                anagrams[anagrams.size() - 1].push_back(str);
                indices[sorted] = anagrams.size() - 1;
            }
        }

        return anagrams;
    }
};
