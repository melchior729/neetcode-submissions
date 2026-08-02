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
        auto pre_right{prefix[right]};
        if (left == 0) {
            return pre_right;
        }

        return pre_right - prefix[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */