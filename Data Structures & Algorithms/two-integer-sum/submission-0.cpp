class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int other = target - num;
            if (seen.contains(other)) {
                vector<int> solution = {
                    std::min(i, seen[other]),
                    std::max(i, seen[other])
                };
                return solution;
            }

            
            seen[num] = i;
        }

        return {};
   }
};
