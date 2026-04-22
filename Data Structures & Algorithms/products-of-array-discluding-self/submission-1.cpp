class Solution {
public:
/**



Looking at example 2, its clear that 0s are very important to this question.
If # zeros > 1, then the product is always 0.
if # zero == 1, then the product is 0 when nums[i] != 0. Otherwise its the max product
If # zero == 0, then the prodcut is max product / nums[i].

*/
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
            }

            else {
                max_product *= num;
            }
        }

        vector<int> res(n, 0);

        for (size_t i = 0; i < n; i++) {
            if (num_zeros != 0) {
                // simplify using ternary  
                if (nums[i] != 0) {
                    res[i] = 0;
                } else {
                    res[i] = max_product;
                }
            } else {
                res[i] = max_product / nums[i];
            }
        }

        return res;
    }
};
