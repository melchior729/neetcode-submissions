class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto L{0}, R{static_cast<int>(nums.size()) - 1};

        while (L <= R) {
            auto M{L + (R - L) / 2};
            auto val{nums[M]};
            if (val > target) {
                R = M - 1;
            } else if (val < target) {
                L = M + 1;
            } else {
                return M;
            }
        }

        return L;
    }
};