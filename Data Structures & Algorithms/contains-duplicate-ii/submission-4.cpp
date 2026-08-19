class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window{};
        auto L{0};

        for (auto R{0}; R < nums.size(); ++R) {
            if (R - L > k) {
                window.erase(nums[L]);
                L++;
            }

            if (window.contains(nums[R])) {
                return true;
            }

            window.insert(nums[R]);
        }

        return false;
    }
};