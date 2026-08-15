class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto left{0}, right{static_cast<int>(nums.size() - 1)};

        while (left <= right) {
            auto mid{(left + right) / 2};
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            }
        }

        return -1;
    }
};
