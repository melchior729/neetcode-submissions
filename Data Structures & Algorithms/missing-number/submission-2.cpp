class Solution {
public:
    int missingNumber(vector<int>& nums) {
        auto n{nums.size()};
        auto pi{n * (n + 1) / 2};

        auto sum{0};
        for (const auto &n : nums) {
            sum += n;
        }
        
        if (sum < pi) {
            return pi - sum;
        }

        return 0;
    }
};
