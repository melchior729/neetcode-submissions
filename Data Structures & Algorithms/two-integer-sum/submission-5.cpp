class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices{};

        for (int i{}; i < nums.size(); ++i) {
            auto val{target - nums[i]};
            auto it{indices.find(val)};
            if (it != indices.end()) {
                return {it->second, i};
            }

            indices[nums[i]] = i;
        }

        return {};
    }
};
