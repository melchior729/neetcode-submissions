class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto n{nums.size()};
        vector<int> res(2 * n);

        for (auto i{0uz}; i < n; ++i) {
            res[i] = nums[i];
            res[i + n] = nums[i];
        }       

        return res;
    }
};