class Solution {
   public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size());

        for (auto i{0uz}; i < matrix.size(); ++i) {
            for (auto j{0uz}; j < matrix[0].size(); ++j) {
                res[j].push_back(matrix[i][j]);
            }
        }

        return res;
    }
};