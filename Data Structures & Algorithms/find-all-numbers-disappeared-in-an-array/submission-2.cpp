class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (const auto &n : nums) {
            auto i{abs(n) - 1};
            nums[i] = -1 * (abs(nums[i]));
        }

        vector<int> res{};
        for (auto i{0uz}; i < nums.size(); ++i) {
            auto n{nums[i]};
            if (n > 0) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};