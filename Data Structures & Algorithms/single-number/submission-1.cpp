class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        auto res{0};
        for (const auto &n : nums) {
            res ^= n;
        }

        return res;
    }
};
