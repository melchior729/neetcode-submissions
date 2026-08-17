class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res(nums.size());

        for (auto i{0uz}; i < nums.size(); ++i) {
            res[nums[i] - 1] = -1;
        }

        vector<int> ret{};
        for (auto i{0uz}; i < res.size(); ++i) {
            if (res[i] != -1) {
                ret.push_back(i + 1);
            }
        }

        return ret;
    }
};