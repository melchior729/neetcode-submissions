class Solution {
   public:
    vector<int> sortedSquares(vector<int>& nums) {
        auto L{0uz}, R{nums.size() - 1};
        vector<int> res{};

        while (L <= R) {
            auto lsq{nums[L] * nums[L]};
            auto rsq{nums[R] * nums[R]};
            if (lsq >= rsq) {
                res.push_back(lsq);
                L++;
            } else {
                res.push_back(rsq);
                R--;
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};