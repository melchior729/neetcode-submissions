class Solution {
   public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        auto rows{matrix.size()};
        auto cols{matrix[0].size()};

        vector<vector<int>> res(cols);

        for (auto i{0uz}; i < rows; ++i) {
            for (auto j{0uz}; j < cols; ++j) {
                res[j].push_back(matrix[i][j]);
            }
        }

        return res;
    }
};