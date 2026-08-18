class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int> count(nums.size() + 1, 0);
        for (const auto &n : nums) {
            auto i{min(n, static_cast<int>(nums.size()))};
            count[i]++;
        }

        auto sum{0};
        for (auto i{nums.size() + 1}; i --> 0;) {
            sum += count[i];
            if (i == sum) {
                return sum;
            }
        }

        return -1;
    }
};