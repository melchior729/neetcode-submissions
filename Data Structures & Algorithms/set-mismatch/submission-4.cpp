class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        auto prod{static_cast<int>(nums.size() * (nums.size() + 1) / 2)};
        auto a{0};
        auto sum{0};

        for (auto &num : nums) {
            if (nums[abs(num) - 1] < 0) {
                a = abs(num);
                sum -= abs(num);
            }

            sum += abs(num);
            nums[abs(num) - 1] = -1 * abs(nums[abs(num) - 1]);
        }

        return {a, prod - sum};
    }
};