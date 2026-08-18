class Solution {
   public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<string, int> common{};

        for (const auto& word : words) {
            unordered_map<string, int> ch_count{};
            for (const auto& c : word) {
                auto str{string{c}};
                ch_count[str]++;
            }

            if (common.empty()) {
                common = ch_count;
                continue;
            }

            for (const auto& [k, v] : common) {
                if (common[k] != ch_count[k]) {
                    common[k] = min(common[k], ch_count[k]);
                }
            }
        }

        vector<string> res{};
        for (const auto& [k, v] : common) {
            for (auto i{0}; i < v; ++i) {
                res.push_back(k);
            }
        }

        return res;
    }
};
