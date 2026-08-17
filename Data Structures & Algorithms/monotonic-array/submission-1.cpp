class Solution {
   public:
    bool isMonotonic(vector<int>& nums) {
        auto dir{0};

        for (auto i{1uz}; i < nums.size(); ++i) {
            auto dx{nums[i] - nums[i - 1]};
            auto dy{dx == 0 ? 0 : dx / abs(dx)};

            if (dir == 0) {
                dir = dx != 0 ? dy : 0;
            } else {
                if (dir != dy && dy != 0) {
                    return false;
                }
            }
        }

        return true;
    }
};