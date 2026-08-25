class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        auto max_cons{0};
        auto cons{0};

        for (auto num : nums) {
            if (num == 1) {
                cons++;
            } else {
                cons = 0;
            }

            max_cons = max(max_cons, cons);
        }

        return max_cons;
    }
};