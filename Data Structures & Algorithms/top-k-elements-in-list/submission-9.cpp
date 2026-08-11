class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> oc{};
        vector<vector<int>> freq(nums.size());

        for (const auto &n : nums) {
            oc[n]++;
        }

        for (const auto &[k, v] : oc) {
            freq[v - 1].push_back(k);
        }

        vector<int> res{};
        for (auto bucket{freq.rbegin()}; bucket != freq.rend(); ++bucket) {
            for (auto it{bucket->rbegin()}; it != bucket->rend(); ++it) {
                auto val{*it};
                res.push_back(val);
                if (k == res.size()) {
                    return res;
                } 
            }
        }

        return res;
    }
};
