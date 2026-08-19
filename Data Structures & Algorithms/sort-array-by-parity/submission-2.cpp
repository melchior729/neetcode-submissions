class Solution {
   public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        auto L{0uz}, R{nums.size() - 1};

        while (L < R) {
            auto lrem{nums[L] % 2};
            auto rrem{nums[R] % 2};

            if (lrem == 0) {
                L++;
            }

            else if (rrem == 1) {
                R--;
            }
            
            else {
                swap(nums[L], nums[R]);
                L++;
            }
        }

        return nums;
    }
};