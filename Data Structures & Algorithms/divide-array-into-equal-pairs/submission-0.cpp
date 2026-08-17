class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> singles{};

        for (const auto &n : nums) {
            if (singles.contains(n)) {
                singles.erase(n);
            } else {
                singles.insert(n);
            }
        }

        return singles.empty();
    }
};