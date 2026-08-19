class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*
        
        
        0 0 1 2 0 5

        1 2 5 2 0

        1 2 5 0 0 0 


        */

        auto L{0};
        while (L < nums.size() && nums[L] != 0) {
            ++L;
        }

        for (auto R{L}; R < nums.size(); ++R) {
            // L is on a index that contains 0.
            if (nums[R] != 0) {
                nums[L++] = nums[R];
            }
        }

        for (; L < nums.size(); ++L) {
            nums[L] = 0;
        }
    }
};