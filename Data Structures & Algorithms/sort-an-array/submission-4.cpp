class Solution {

    void quicksort(vector<int> &nums, int low, int high) {
        if (low < high) {
            auto pi{partition(nums, low, high)};
            quicksort(nums, low, pi - 1);
            quicksort(nums, pi + 1, high);
        }
    }

    int partition(vector<int> &nums, int low, int high) {
        auto pivot{nums[high]};
        auto i{low - 1};

        for (auto j{low}; j < high; ++j) {
            if (nums[j] < pivot) {
                swap(nums[++i], nums[j]);
            }
        }

        swap(nums[++i], nums[high]);
        return i;
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;     
    }
};