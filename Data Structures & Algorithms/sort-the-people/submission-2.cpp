class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, int>> hcopy(heights.size());
        for (auto i{0uz}; i < heights.size(); ++i) {
            hcopy.push_back({heights[i], i});
        } 

        sort(hcopy.rbegin(), hcopy.rend());
        vector<string> res(heights.size());

        for (auto i{0uz}; i < heights.size(); ++i) {
            res[i] = names[hcopy[i].second];
       }

        return res;
    }
};