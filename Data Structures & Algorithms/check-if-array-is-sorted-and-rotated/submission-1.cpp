class Solution {
public:
    bool check(vector<int>& nums) {
        auto n{nums.size()};
        auto min_i{0uz};
        for (auto i{0uz}; i < n; ++i) {
            if (nums[i] < nums[min_i]) {
                min_i = i;
            }
        }

        for (auto i{1uz}; i < n; ++i) {
            auto k{(i + min_i) % n};
            if (nums[k] < nums[k == 0 ? n - 1 : k]) {
                return false;
            }
        }

        return true;
    }
};