class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto size{nums.size()};
        vector<int> res(size);

        res[0] = 1;
        for (auto i{1uz}; i < size; ++i) {
            res[i] = nums[i - 1] * res[i - 1];
        }

        auto prod{1};
        for (auto i{size - 1}; i --> 0;) {
            res[i] *= nums[i + 1] * prod;
            prod *= nums[i + 1];
        }

        return res;
    }
};
