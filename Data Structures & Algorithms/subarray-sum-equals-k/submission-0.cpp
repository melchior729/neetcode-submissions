class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        auto size{nums.size()};
        auto total{0};
        for (auto i{0uz}; i < size; ++i) {
            if (nums[i] == k) {
                total++;
            }

            auto sum{nums[i]};
            for (auto j{i + 1}; j < size; ++j) {
                sum += nums[j];
                if (sum == k) {
                    total++;
                }
            }
        }

        return total;
    }
};