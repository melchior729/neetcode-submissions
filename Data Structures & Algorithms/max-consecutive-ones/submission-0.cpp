class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        auto max_cons{0};
        auto cons{0}; 

        for (const auto &n : nums) {
            if (n == 1) {
                cons++;
            } else {
                cons = 0;
            }

            max_cons = max(max_cons, cons);
        }

        return max_cons;
    }
};