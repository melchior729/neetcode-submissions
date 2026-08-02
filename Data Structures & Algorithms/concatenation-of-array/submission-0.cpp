class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto size{nums.size()};
        vector<int> res(2 * size);

        for (auto i{0uz}; i < size; ++i) {
            auto n{nums[i]};
            res[i] = n;
            res[i + size] = n;
        }

        return res;
    }
};