class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int max_product{1};    
        int num_zeros{};
        size_t n = nums.size();

        for (const auto& num : nums) {
            if (num == 0){ 
                num_zeros++;
                if (num_zeros > 1) {
                    return vector<int>(n, 0);
                }
            } else {
                max_product *= num;
            }
        }

        vector<int> res(n, 0);
        for (size_t i = 0; i < n; i++) {
            res[i] = num_zeros == 0 ? max_product / nums[i] : nums[i] == 0 ? max_product : 0;
        } 

        return res;
    }
};
