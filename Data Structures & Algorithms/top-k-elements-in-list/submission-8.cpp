class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        auto size{nums.size()};
        unordered_map<int, int> indices{};
        vector<vector<int>> freq(size);

        for (const auto &n : nums) {
            indices[n]++;
        }

        for (const auto &[k, v] : indices) {
            freq[v - 1].push_back(k);
        }

        vector<int> res{};
        for (auto bucket{freq.rbegin()}; bucket != freq.rend(); ++bucket) {
            for (auto it{bucket->rbegin()}; it != bucket->rend(); ++it) {
                res.push_back(*it);
                if (res.size() == k) {
                    return res;
                }
            } 
        }

        return res;
    }
};
