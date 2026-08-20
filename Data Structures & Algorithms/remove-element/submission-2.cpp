class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto L{0};
        for (auto R{0}; R < nums.size(); ++R) {
            if (nums[R] != val) {
                nums[L++] = nums[R];
            }
        }

        return L;
    }
};