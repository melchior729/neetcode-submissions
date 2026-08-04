class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto size{nums.size()};
        vector<int> left(size), right(size);

        left[0] = 1;
        for (auto i{1uz}; i < size; ++i) {
            left[i] = nums[i - 1] * left[i - 1];
        }

        right[size - 1] = 1;
        for (auto i{size - 1}; i --> 0;) {
            right[i] = nums[i + 1] * right[i + 1];
        }

        vector<int> res(size);
        for (auto i{0uz}; i < size; ++i) {
            res[i] = left[i] * right[i];    
        }

        return res;
    }
};
