class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, size_t> indices;

        for (const auto& str : strs) {
            auto sorted = str;
            std::sort(sorted.begin(), sorted.end());

            if (const auto it{indices.find(sorted)}; it == indices.end()) {
                anagrams.push_back({});
                anagrams.back().push_back(str);
                indices[sorted] = anagrams.size() - 1;
            } else {
                anagrams[indices[sorted]].push_back(str);
            }
        }

        return anagrams;
    }
};
