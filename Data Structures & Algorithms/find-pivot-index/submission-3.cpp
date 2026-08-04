class Solution {
public:
    int pivotIndex(vector<int>& nums) { 
        auto total{0};
        for (const auto &num : nums) {
            total += num;
        }

        auto left{0};
        for (auto i{0}; i < nums.size(); ++i) {
            auto right{total - left - nums[i]};
            if (left == right) {
                return i;
            }

            left += nums[i];
        }

        return -1;
    }
};