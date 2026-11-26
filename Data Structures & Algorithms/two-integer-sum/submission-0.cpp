class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (auto i{0}; i < nums.size(); ++i) {
            auto diff = target - nums[i];

            if (const auto it = seen.find(diff); it != seen.end()) {
                return { seen[diff], i };
            }
            
            seen[nums[i]] = i;
        }

        return {};
    }
};
