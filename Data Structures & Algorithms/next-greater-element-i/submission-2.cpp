class Solution {
   public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        auto n{nums2.size()};
        vector<int> res{};

        for (auto i{0uz}; i < nums1.size(); ++i) {
            auto greatest{-1};
            auto left{nums1[i]};
            for (auto j{n}; j --> 0;) {
                auto right{nums2[j]};
                if (right > left) {
                    greatest = right;
                } else if (right == left) {
                    break;
                }
            }

            res.push_back(greatest);
        }

        return res;
    }
};