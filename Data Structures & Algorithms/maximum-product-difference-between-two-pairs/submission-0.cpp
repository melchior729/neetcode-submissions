class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        auto a{0}, b{0}, c{10001}, d{10001};

        for (auto num : nums) {
            if (num > a) {
                b = a;
                a = num;
            }

            else if (num > b) {
                b = num;
            }

            if (num < d) {
                c = d;
                d = num;
            }

            else 
            if (num < c) {
                c = num;
            }
        }

        return a * b - c * d;
    }
};