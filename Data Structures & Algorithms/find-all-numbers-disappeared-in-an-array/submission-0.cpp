class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res{};
        for (auto i{1uz}; i <= nums.size(); ++i) {
            if (!ranges::contains(nums, i)) {
                res.push_back(i);
            }
        }

        return res;
    }
};