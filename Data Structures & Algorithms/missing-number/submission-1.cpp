class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto i{0uz}; i < nums.size(); ++i) {
            if (nums[i] != i) {
                return i;
            }
        }

        return nums[nums.size() - 1] + 1;
    }
};
