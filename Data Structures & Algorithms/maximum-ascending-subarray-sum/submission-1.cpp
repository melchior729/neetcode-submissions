class Solution {
   public:
    int maxAscendingSum(vector<int>& nums) {
        auto max_sum{nums[0]};
        auto sum{max_sum};

        for (auto i{1uz}; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                sum = 0;
            }

            sum += nums[i];
            max_sum = max(max_sum, sum);
        }

        return max_sum;
    }
};