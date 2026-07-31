class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set{};
        for (const auto& n : nums) {
            if (set.contains(n)) {
                return true;
            }

            set.insert(n);
        }

        return false;
    }
};