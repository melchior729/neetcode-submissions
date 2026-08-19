class Solution {
   public:
    vector<int> sortedSquares(vector<int>& nums) {
        auto res{nums};
        for (auto &n : res) {
            n = n * n;
        }

        sort(res.begin(), res.end());

        return res;
    }
};