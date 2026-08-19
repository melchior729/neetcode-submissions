class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        auto i{m - 1};
        auto j{n - 1};

        for (auto k{m + n - 1}; k >= 0; k--) {
            if (i < 0 && j < 0) {
                break;
            }

            if (i < 0 && j >= 0) {
                nums1[k] = nums2[j];
                j--;
            }

            else if (i >= 0 && j < 0) {
                nums1[k] = nums1[i];
                i--;
            }

            else {
                auto left{nums1[i]};
                auto right{nums2[j]};
                if (left >= right) {
                    nums1[k] = left;
                    i--;
                } else {
                    nums1[k] = right;
                    j--;
                }
            }
        }
    }
};