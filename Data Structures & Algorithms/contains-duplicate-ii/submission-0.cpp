class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (auto i{0}; i < nums.size(); ++i) {
            for (auto j{i + 1}; j < nums.size(); ++j) {
                if (nums[i] == nums[j] && abs(i - j) <= k) {
                    return true;
                }
            }
        }

        return false;
    }
};