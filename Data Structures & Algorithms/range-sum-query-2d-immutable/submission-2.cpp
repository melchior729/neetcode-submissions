class NumMatrix {
    vector<vector<int>> sums;

   public:
    NumMatrix(vector<vector<int>>& matrix) : sums(matrix.size()) {
        for (auto i{0uz}; i < matrix.size(); ++i) {
            for (auto j{0uz}; j < matrix[i].size(); ++j) {
                auto top{i == 0 ? 0 : sums[i - 1][j]};
                auto left{j == 0 ? 0 : sums[i][j - 1]};
                auto shared{i == 0 || j == 0 ? 0 : sums[i - 1][j - 1]};
                sums[i].push_back(matrix[i][j] + left + top - shared);
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        auto top{row1 == 0 ? 0 : sums[row1 - 1][col2]};
        auto left{col1 == 0 ? 0 : sums[row2][col1 - 1]};
        auto shared{row1 == 0 || col1 == 0 ? 0 : sums[row1 - 1][col1 - 1]};
        return sums[row2][col2] - top - left + shared;
    }
};