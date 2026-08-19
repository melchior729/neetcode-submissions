class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> seen{};

        for (const auto& n : nums) {
            seen[n]++;
        }

        for (const auto& [k, v] : seen) {
            if (v == 1) {
                return k;
            }
        }

        return -1;
    }
};
