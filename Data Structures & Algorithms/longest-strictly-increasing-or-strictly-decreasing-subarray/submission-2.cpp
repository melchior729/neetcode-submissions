class Solution {
   public:
    int longestMonotonicSubarray(vector<int>& nums) {
        auto max_len{1};
        auto inc{1};
        auto dsc{1};
        
        for (auto i{1uz}; i < nums.size(); ++i) {
            auto diff{nums[i] - nums[i - 1]};

            if (diff > 0) {
                inc++;
                dsc = 1;
            }

            else if (diff < 0) {
                dsc++;
                inc = 1;
            }

            else {
                inc = 1;
                dsc = 1;
            }

            max_len = max({max_len, inc, dsc});
        }

        return max_len;
    }
};