class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // simple approach, nested loop

        vector<int> ret{};
        for (auto i{0uz}; i < nums.size(); ++i) {
            auto val{1};
            for (auto j{0uz}; j < nums.size(); ++j) {
                if (j == i) { 
                    continue;
                }

                val *= nums[j];
            }
            ret.push_back(val);
        }

        return ret;
    }
};
