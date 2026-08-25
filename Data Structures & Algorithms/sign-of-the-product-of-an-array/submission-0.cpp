class Solution {
public:
    int arraySign(vector<int>& nums) {
        auto prod{1LL};
        for (auto n : nums) {
            prod *= n;
        }       

        if (prod == 0) {
            return 0;
        }

        return prod / (abs(prod));
    }
};