class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        /*
        sort(nums)

        left = 0
        right = k - 1
        res = 100 001

        while right < len(nums):
            diff = nums[right] - nums[left]
            res = min(res, diff)

            left++
            right++

        return res


        */ 

        sort(nums.begin(), nums.end());

        auto left{0}, right{k - 1};
        auto res{numeric_limits<int>::max()};

        while (right < nums.size()) {
            auto diff{nums[right] - nums[left]};
            res = min(res, diff);

            left++;
            right++;
        }

        return res;
    }
};