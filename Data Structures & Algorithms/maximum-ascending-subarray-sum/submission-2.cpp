class Solution {
   public:
    int maxAscendingSum(vector<int>& nums) {
        auto max_sum{0};
        auto sum{nums[0]};

        for (auto i{1uz}; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                max_sum = max(max_sum, sum);
                sum = 0;
            }

            sum += nums[i];
        }

        return max(max_sum, sum);
    }
};