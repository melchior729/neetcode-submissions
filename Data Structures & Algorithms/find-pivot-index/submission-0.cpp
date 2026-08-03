class Solution {
   public:
    int pivotIndex(vector<int>& nums) {
        auto size{nums.size()};
        vector<int> left(size), right(size);

        auto sum{0};
        for (auto i{1uz}; i < size; ++i) {
            left[i] = nums[i - 1] + sum;
            sum += nums[i - 1];
        }

        sum = 0;
        for (auto i{size - 1}; i-- > 0;) {
            right[i] = nums[i + 1] + sum;
            sum += nums[i + 1];
        }

        for (auto i{0uz}; i < size; ++i) {
            if (left[i] == right[i]) {
                return i;
            }
        }

        return -1;
    }
};