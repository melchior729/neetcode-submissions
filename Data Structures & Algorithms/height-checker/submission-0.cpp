class Solution {
public:
    int heightChecker(vector<int>& heights) {
        auto cpy{heights};
        sort(cpy.begin(), cpy.end());

        auto invalid{0};
        for (auto i{0uz}; i < cpy.size(); ++i) {
            if (cpy[i] != heights[i]) {
                invalid++;
            }
        }

        return invalid;
    }
};