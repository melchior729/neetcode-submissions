class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, size_t> indices{};
        vector<vector<string>> anagrams{};

        for (const auto &str : strs) {
            auto sorted{str};
            std::sort(sorted.begin(), sorted.end());

            if (indices.contains(sorted)) {
                anagrams[indices[sorted]].push_back(str);
            } else {
                anagrams.push_back({});
                anagrams[anagrams.size() - 1].push_back(str);
                indices[sorted] = anagrams.size() - 1;
            }
        }    

        return anagrams;
    }
};
