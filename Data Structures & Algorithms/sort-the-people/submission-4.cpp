class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        auto n{heights.size()};
        vector<pair<int, int>> hcopy(n);
        for (auto i{0uz}; i < n; ++i) {
            hcopy[i] = {heights[i], i};
        } 

        sort(hcopy.rbegin(), hcopy.rend());
        vector<string> res(n);

        for (auto i{0uz}; i < n; ++i) {
            res[i] = names[hcopy[i].second];
       }

        return res;
    }
};