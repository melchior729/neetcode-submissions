class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res{};

        sort(nums.begin(), nums.end());

        for (auto i{0uz}; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            auto left{i + 1}, right{nums.size() - 1};
            while (left < right) {
                auto sum{nums[i] + nums[left] + nums[right]};
                if (sum > 0) {
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    vector<int> sol{nums[i], nums[left], nums[right]};
                    res.push_back(sol);

                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                }
            }
        }

        return res;
    }
};
