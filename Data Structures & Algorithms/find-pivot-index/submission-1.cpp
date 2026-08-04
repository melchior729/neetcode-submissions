class Solution {
public:
    int pivotIndex(vector<int>& nums) { 
        auto size{nums.size()};
        vector<int> left(size), right(size);

        for (auto i{1uz}; i < size; ++i) {
            left[i] = left[i - 1] + nums[i - 1];
        }

        for (auto i{size - 1}; i --> 0;) {
            right[i] = right[i + 1] + nums[i + 1];
        }

        for (auto i{0}; i < size; ++i) {
            if (left[i] == right[i]) {
                return i;
            }
        }

        return -1;
    }
};