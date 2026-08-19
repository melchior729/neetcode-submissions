class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        auto res{nums};
        sort(res.begin(), res.end(), [](const int& a, const int &b) {
            auto arem{a % 2};
            auto brem{b % 2};
            if (arem == brem) {
                return a < b;
            }

            return arem == 0;
        });    

        return res;
    }
};