class Solution {
public:
    int arraySign(vector<int>& nums) {
        auto sign{1}; 
        for (const auto &n : nums) {
            if (n == 0) {
                return 0;
            }

            sign *= (n/abs(n));
        }

        return sign > 0 ? 1 : -1;
    }
};