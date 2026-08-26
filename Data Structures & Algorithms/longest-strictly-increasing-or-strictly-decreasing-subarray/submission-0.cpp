class Solution {
   public:
    int longestMonotonicSubarray(vector<int>& nums) {
        /*

        if len(nums) == 1:
            return 1

        max_inc = 0
        max_dsc = 0

        inc_start = 0
        dsc_start = 0

        dir = 0

        for i = 1, i < len(nums), ++i:
            diff = nums[i] > nums[i - 1] ? 1 : nums[i] < nums[i - 1] ? -1 : 0

            if dir != diff:
                if prev dir == inc:
                    max_inc = max(max_inc, i - inc_start)
                    inc_start = i
                else if prev dir == dsc:
                    max_dsc = max(max_dsc, i - dsc_start)
                    dsc_start = i
                else:
                    inc_start = i - 1
                    dsc_start = i - 1

                dir = diff
            else:
                if dir == 1:
                    max_inc = max(max_inc, i - inc_start)
                else if dir == -1:
                    max_dsc = max(max_dsc, i - dsc_start)
                else:
                    inc_start = i - 1
                    dsc_start = i - 1


        return max(max_inc, max_dsc)

        */

        if (nums.size() == 1) {
            return 1;
        }

        auto max_inc{0}, max_dsc{0};
        auto inc_start{0}, dsc_start{0};
        auto dir{0};

        for (auto i{1}; i < nums.size(); ++i) {
            auto diff{nums[i] > nums[i - 1] ? 1 : nums[i] < nums[i - 1] ? -1 : 0};

            if (dir != diff) {
                if (dir == 1) {
                    max_inc = max(max_inc, i - inc_start);
                    inc_start = i;
                } else if (dir == 2) {
                    max_dsc = max(max_dsc, i - dsc_start);
                    dsc_start = i;
                } else {
                    inc_start = i - 1;
                    dsc_start = i - 1;
                }
            }

            else {
                if (dir == 1) {
                    max_inc = max(max_inc, i - inc_start);
                } else if (dir == -1) {
                    max_dsc = max(max_dsc, i - dsc_start);
                } else {
                    inc_start = i - 1;
                    dsc_start = i - 1;
                }
            }

            dir = diff;
        }

        return max(max_inc, max_dsc);
    }
};