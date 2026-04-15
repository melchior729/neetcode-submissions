class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> seen;

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (seen.contains(diff)) {
                return {seen[diff], i};
            }
            seen[nums[i]] = i; 
        }
        return {};
   }
};
