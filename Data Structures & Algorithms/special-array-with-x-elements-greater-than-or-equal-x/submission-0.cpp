class Solution {
public:
    int specialArray(vector<int>& nums) {
        for (auto i{1uz}; i <= nums.size(); ++i) {
            auto count{0};
            for (const auto &n : nums) {
                if (n >= i) {
                    count++;
                }
            } 

            if (count == i) {
                return i;
            }
        }

        return -1;
    }
};