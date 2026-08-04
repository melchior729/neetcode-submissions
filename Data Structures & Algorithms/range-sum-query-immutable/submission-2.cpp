class NumArray {
    vector<int> sums;

   public:
    NumArray(vector<int>& nums) : sums(nums.size()) {
        sums[0] = nums[0];
        for (auto i{1uz}; i < nums.size(); ++i) {
            sums[i] = sums[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        auto sum_left{left == 0 ? 0 : sums[left - 1]};
        return sums[right] - sum_left;
    }
};