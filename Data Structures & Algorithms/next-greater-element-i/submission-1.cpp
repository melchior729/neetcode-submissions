class Solution {
   public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        auto n{nums2.size()};    
        vector<int> res{};

        for (const auto &num : nums1) {
            auto greater{-1};
            for (auto i{n}; i --> 0;) {
                if (nums2[i] > num) {
                    greater = nums2[i];
                } else if (nums2[i] == num) {
                    break;
                }
            }

            res.push_back(greater); 
        }

        return res;
    }
};