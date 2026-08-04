class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen{{0, 1}};
        auto prefix{0}, ret{0};

        for (const auto &n : nums) {
            prefix += n;
            auto diff{prefix - k};
            if (seen.contains(diff)) {
                ret += seen[diff];
            }

            seen[prefix]++;
        }

        return ret;
    }
};