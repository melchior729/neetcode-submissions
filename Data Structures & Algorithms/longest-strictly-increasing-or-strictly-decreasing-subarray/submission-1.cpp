class Solution {
   public:
    int longestMonotonicSubarray(vector<int>& nums) {
        /*

        return value: len of long. mono. subarr

        trivial base case: n = 1 => return 0

        state recurrence in 1 sentence: 
            i requires i - 1
            if diff > 0:
                inc++
                dsc = 1
            else if diff < 0:
                dsc++
                inc = 1
            else:
                inc = 1
                dsc = 1


        if recurrences branches, check if they interact, if not, run in same loop
        
        */

        auto max_len{0};
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