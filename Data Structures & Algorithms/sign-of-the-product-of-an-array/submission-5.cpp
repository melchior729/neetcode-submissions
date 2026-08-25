class Solution {
   public:
    int arraySign(vector<int>& nums) {
        auto prod{1};
        for (auto n : nums) {
            if (n == 0) {
                return 0;
            }

            if (prod > 0 && n > 0 || prod < 0 && n < 0) {
                prod = 1;
            }

            else if (prod > 0 && n < 0 || prod < 0 && n > 0) {
                prod = -1;
            }
        }

        return prod;
    }
};