class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, size_t> indices{};
        vector<vector<string>> anagrams{};

        for (const auto &str : strs) {
            auto sorted{str};
            std::sort(sorted.begin(), sorted.end()); 

            auto it{indices.find(sorted)};
            if (it != indices.end()) {
                anagrams[it->second].push_back(str);
            } else {
                anagrams.push_back(vector<string>{});
                auto i{anagrams.size() - 1};
                anagrams[i].push_back(str);
                indices[sorted] = i;
            }
        }

        return anagrams;
    }
};
