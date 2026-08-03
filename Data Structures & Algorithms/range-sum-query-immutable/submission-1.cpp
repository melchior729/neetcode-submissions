class NumArray {
    vector<int> sums;

   public:
    NumArray(vector<int>& nums) : sums(nums.size()) {
        for (auto i{0uz}; i < nums.size(); ++i) {
            auto prev{i == 0 ? 0 : sums[i - 1]};
            sums[i] = nums[i] + prev;
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return sums[right];
        }

        return sums[right] - sums[left - 1];
    }
};