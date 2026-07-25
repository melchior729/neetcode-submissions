class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // obviously needs a map since we are tracking occurences.
        // make a vector of vectors of big[i] contains elements with occurence of i + 1.
        // walk backwards for k steps, add those to the ret vector

        auto size{nums.size()};
        unordered_map<int, int> occur{};
        vector<vector<int>> indices(size);

        for (size_t i{}; i < size; ++i) {
            occur[nums[i]]++;
        }

        for (const auto& [key, v] : occur) {
           indices[v - 1].push_back(key);
        }

        vector<int> ret{};

        for (auto it{indices.rbegin()}; it != indices.rend(); ++it) {
            auto bucket{*it};
            for (auto jt{bucket.rbegin()}; jt != bucket.rend(); ++jt) {
                auto v{*jt};
                ret.push_back(v);
                if (ret.size() == k) {
                    return ret;
                }
            }
        }

        return ret;
    }
};
