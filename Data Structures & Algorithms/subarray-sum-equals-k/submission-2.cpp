class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        auto size{nums.size()};
        vector<int> prefix(size);

        prefix[0] = nums[0];
        for (auto i{1uz}; i < size; ++i) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        unordered_map<int, int> seen{{0, 1}};

        auto ret{0};
        for (auto i{0uz}; i < size; ++i) {
            auto diff{prefix[i] - k};
            if (seen.contains(diff)) {
                ret += seen[diff];
            }

            seen[prefix[i]]++;
        }

        return ret;
    }
};