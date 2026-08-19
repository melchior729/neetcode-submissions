class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        auto sum{0};
        auto n{mat.size()};

        for (auto i{0uz}; i < n; ++i) {
            sum += mat[i][i];

            if (i != n - i - 1) {
                sum += mat[i][n - i - 1];
            }
        }

        return sum;
    }
};