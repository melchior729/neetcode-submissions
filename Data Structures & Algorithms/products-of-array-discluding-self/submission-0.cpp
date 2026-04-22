class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (i == j) {
                   continue; 
                }

                arr[i] *= nums[j]; 
            } 
        }
        
        return arr;
    }
};
