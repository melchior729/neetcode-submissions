class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s{};
        for (const auto num : nums) {
            if (!s.insert(num).second) {
                return true;
            }
        }

        return false;
    }
};