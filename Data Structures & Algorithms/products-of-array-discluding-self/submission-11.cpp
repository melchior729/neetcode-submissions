class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto size{nums.size()};
        vector<int> res(size); 

        auto rnprod{1};
        for (auto i{0uz}; i < size; ++i) {
            if (i != 0) {
                rnprod *= nums[i - 1];
            }

            res[i] = rnprod;
        }


        rnprod = 1;
        for (auto i{size}; i-- > 0;) {
            if (i != size - 1) {
                rnprod *= nums[i + 1];
            }

            res[i] *= rnprod;
        }

        return res;
    }
};
