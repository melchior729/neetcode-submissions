class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // nums[i] + nums[j] == target.
        // we will loop through the array and use that as nums[i].
        // for nums[j], we will use a set that stores previous seen values
        // so then we can do (set.contains(target - nums[i])) as our check
        // but since we have to return the indices, we will have to store the index as well.
        // so we can use a map instead.
        // so our map is value -> index. 
        // so our return is {i, map.get(target - nums[i])}

        unordered_map<int, int> indices{};

        for (int i{}; i < nums.size(); ++i) {
            auto val{target - nums[i]};
            auto it{indices.find(val)};
            if (it != indices.end()) {
                return {indices[val], i};
            }

            indices[nums[i]] = i;
        }

        return {};
    }
};
