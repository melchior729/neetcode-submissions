class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        auto dir{0};

        for (auto i{1uz}; i < nums.size(); ++i) {
            auto diff{nums[i] - nums[i - 1]};
            if (dir == 0) {
                if (diff > 0) {
                    dir = 1;
                } else if (diff < 0) {
                    dir = -1;
                }
            } else {
                if (diff != 0 && dir != (diff / abs(diff))) {
                    return false;
                }
            }
        }
        
        return true;
    }
};