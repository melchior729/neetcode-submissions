class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map from sorted -> index in big vec

        // loop through the arr, sort the wrod by letters
        // if that sorted is in map, then psuh it to vectors[i]
        // if it is not, then make a new one (at the back) and then push it there,
        // also fill in the index to the map

        vector<vector<string>> anagrams{};
        unordered_map<string, size_t> indices{};

        for (const auto& str : strs) {
            auto sorted{str};
            std::sort(sorted.begin(), sorted.end());

            auto it{indices.find(sorted)};
            // found
            if (it != indices.end()) {
                anagrams[it->second].push_back(str);
            } 
            
            // not found
            else {
                anagrams.push_back({});
                anagrams[anagrams.size() - 1].push_back(str);
                indices[sorted] = anagrams.size() - 1;
            }
        }

        return anagrams;
    }
};
