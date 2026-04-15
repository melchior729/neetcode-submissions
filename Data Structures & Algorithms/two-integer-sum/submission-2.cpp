class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int diff = target - num;
            if (indices.contains(diff)) {
                return {indices[diff], i};
            }
            indices[num] = i;
        }

        return {};
    }
};
