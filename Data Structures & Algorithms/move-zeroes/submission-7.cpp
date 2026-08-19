class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto L{0};
        while (L < nums.size() && nums[L] != 0) {
            ++L;
        }

        for (auto R{L}; R < nums.size(); ++R) {
            if (nums[R] != 0) {
                nums[L++] = nums[R];
            }
        }

        for (; L < nums.size(); ++L) {
            nums[L] = 0;
        }
    }
};