class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        /*

        [2, 1, 3, 5, 6]     k = 2   m = 2

        [8, 4, 6, 5, 6]     k = 5   m = 2

        for i = 0, i < k:
            min_idx = 0
            for j = 0, j < len(nums):
                if nums[j] < nums[min_idx]:
                    min_idx = j
            nums[min_idx] *= multiplier
        
        return nums

        */

        for (auto i{0}; i < k; ++i) {
            auto min_idx{0};
            for (auto j{0}; j < nums.size(); ++j) {
                if (nums[j] < nums[min_idx]) {
                    min_idx = j;
                }
            }
            nums[min_idx] *= multiplier;
        }    

        return nums;
    }
};