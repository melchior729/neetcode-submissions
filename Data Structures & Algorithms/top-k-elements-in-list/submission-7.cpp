class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        auto size{nums.size()};
        vector<vector<int>> arr(size);
        unordered_map<int, int> seen;

        for (auto i{0uz}; i < size; ++i) {
            auto val{nums[i]};
            seen[val]++;
        }

        for (const auto& [k, v] : seen) {
            arr[v - 1].push_back(k);
        }

        vector<int> res{};
        for (auto it{arr.rbegin()}; it != arr.rend(); ++it) {
            for (auto jt{it->rbegin()}; jt != it->rend(); ++jt) {
                auto val{*jt};
                res.push_back(val);
                if (res.size() == k) {
                    return res;
                }
            }
        }

        return res;
    }
};
