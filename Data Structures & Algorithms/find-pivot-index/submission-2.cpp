class Solution {
public:
    int pivotIndex(vector<int>& nums) { 
        auto size{nums.size()};
        vector<int> left(size), right(size);

        auto total{nums[0]};
        for (auto i{1uz}; i < size; ++i) {
            left[i] = left[i - 1] + nums[i - 1];
            total += nums[i];
        }

        for (auto i{0}; i < size; ++i) {
            if (left[i] == total - left[i] - nums[i]) {
                return i;
            }
        }

        return -1;
    }
};