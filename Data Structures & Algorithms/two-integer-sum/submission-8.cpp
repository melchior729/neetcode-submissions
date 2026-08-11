class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices{};
        for (auto i{0}; i < nums.size(); ++i) {
            auto diff{target - nums[i]};
            if (indices.contains(diff)) {
                return {indices[diff], i};
            }

            indices[nums[i]] = i;
        }

        return {};
    }
};
