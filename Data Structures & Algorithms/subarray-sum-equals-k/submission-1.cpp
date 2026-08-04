class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        auto size{nums.size()};
        vector<int> prefix(size);
        unordered_map<int, int> seen{};
        seen[0] = 1;

        prefix[0] = nums[0];
        for (auto i{1uz}; i < size; ++i) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        auto ret{0};
        for (auto i{0uz}; i < size; ++i) {
            auto diff{prefix[i] - k};
            // 2 - 2 = 0
            if (seen.contains(diff)) {
                ret += seen[diff];
            }

            seen[prefix[i]]++;
        }

        return ret;
    }
};