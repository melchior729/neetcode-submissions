class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        auto left{0uz};
        for (auto right{0uz}; right < nums.size(); ++right) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            } 
        }

        return left;
    }
};