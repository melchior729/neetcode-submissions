class NumArray {
    vector<int> prefix;

   public:
    NumArray(vector<int>& nums) : prefix(nums.size()) {
        prefix[0] = nums[0];
        for (auto i{1uz}; i < nums.size(); ++i) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        auto sum_left{left > 0 ? prefix[left - 1] : 0};
        return prefix[right] - sum_left;
    }
};