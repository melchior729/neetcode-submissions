class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        auto left{0uz}, right{0uz};

        for (auto right{0uz}; right < nums.size(); ++right) {
            if (nums[left] != nums[right]) {
                left++;
            } 

            nums[left] = nums[right];
        }
        
        return ++left;
    }
};