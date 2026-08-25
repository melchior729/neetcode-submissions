class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        auto max_cons{0};
        auto cons{0};

        for (auto num : nums) {
            cons += num == 1
            max_cons = max(max_cons, cons);
        }

        return max_cons;
    }
};