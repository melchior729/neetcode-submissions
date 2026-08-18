class Solution {
   public:
    int longestMonotonicSubarray(vector<int>& nums) {
        auto n{nums.size()};
        if (n == 1) {
            return 1;
        }

        auto max_len{1};
        auto len{max_len};
        auto dir{0};

        for (auto i{1uz}; i < n; ++i) {
            auto diff{nums[i] - nums[i - 1]};
            if (diff > 0) {
                diff = 1;
            } else if (diff < 0) {
                diff = -1;
            } else {
                diff = 0;
            }

            if (dir == diff && dir != 0) {
                len++;
            } else {
                len = diff == 0 ? 1 : 2;
                dir = diff;
            }

            max_len = max(max_len, len);
        }

        return max_len;
    }
};