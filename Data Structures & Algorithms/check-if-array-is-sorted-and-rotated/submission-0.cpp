class Solution {
public:
    bool check(vector<int>& nums) {
        auto dips{0}, dip_pos{-1};
        for (auto i{1uz}; i < nums.size(); ++i) {
            if (nums[i] < nums[i - 1]) {
                dip_pos = i;
                dips++;
            }
        }

        if (nums[nums.size() - 1] > nums[0]) {
            dips++;
        }

        if (dips > 1) {
            return false;
        }

        if (dip_pos == -1) {
            return true;
        }

        auto highest{-1};
        for (auto i{0}; i < nums.size(); ++i) {
            auto j{(i - dip_pos) % nums.size()};
            if (nums[j] < highest) {
                return false;
            }

            nums[j] = highest;
        }

        return true;
    }
};