class Solution {
   public:
    int numIdenticalPairs(vector<int>& nums) {
        auto pairs{0};
        for (auto i{0uz}; i < nums.size(); ++i) {
            for (auto j{i + 1}; j < nums.size(); ++j) {
                pairs += (i < j && nums[i] == nums[j]);
            }
        }

        return pairs;
    }
};