class Solution {
public:
    bool check(vector<int>& nums) {
        auto dips{0};
        for (auto i{1uz}; i < nums.size(); ++i) {
            if (nums[i] < nums[i - 1]) {
                dips++;
            }
        }

        if (nums[nums.size() - 1] > nums[0]) {
            dips++;
        }

        return dips <= 1;
    }
};