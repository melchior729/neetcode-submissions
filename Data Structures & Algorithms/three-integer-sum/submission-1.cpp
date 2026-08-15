class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res{};
        sort(nums.begin(), nums.end());

        auto size{static_cast<int>(nums.size())};
        for (auto i{0}; i < size; ++i) {
            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }

            auto l{i + 1};
            auto r{size - 1};
            while (l < r) {
                auto sum{nums[i] + nums[l] + nums[r]}; 
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (nums[l] == nums[l - 1] && l < r) {
                        l++;
                    }
                }
            }
        }

        return res;
    }
};
