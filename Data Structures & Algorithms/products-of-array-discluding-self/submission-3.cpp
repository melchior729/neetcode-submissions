class Solution {
public:
/**

*/
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);

        vector<int> left(n, 0);
        for (int i = 0; i < n; i++) {
            left[i] = i == 0 ? 1 : nums[i - 1] * left[i - 1]; 
        }

        vector<int> right(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            right[i] = i == (n - 1) ? nums[n - 1] : nums[i] * right[i + 1];
        }

        for (int i = 0; i < n; i++) {
            res[i] = left[i];
            res[i] *= i == n - 1 ? 1 : right[i + 1];
        }

        return res;
    }
};
