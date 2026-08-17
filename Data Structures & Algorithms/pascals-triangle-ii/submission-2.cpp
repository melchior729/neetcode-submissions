class Solution {
   public:
    vector<int> getRow(int rowIndex) {
        vector<int> res{};
        auto prev{1LL};
        res.push_back(prev);

        auto a{rowIndex};
        for (auto b{1}; b <= rowIndex; ++b) {
            res.push_back(prev * (rowIndex - b + 1) / b);
            prev = res.back();
        }

        return res;
    }
};