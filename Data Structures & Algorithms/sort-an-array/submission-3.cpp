class Solution {
    int partition(vector<int>& nums, int low, int high) {
        auto pivot{nums[high]};
        auto i = low - 1;

        for (auto j{low}; j < high; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[i + 1], nums[high]);
        return i + 1;
    }

    void quick_sort(vector<int>& nums, int low, int high) {
        if (low < high) {
            auto pi{partition(nums, low, high)};
            quick_sort(nums, low, pi - 1);
            quick_sort(nums, pi + 1, high);
        }
    }

   public:
    vector<int> sortArray(vector<int>& nums) {
        quick_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};