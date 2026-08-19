class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        auto sum{0};
        auto left{0};
        auto right{mat.size() - 1};

        for (auto i{0uz}; i < mat.size(); ++i) {
            sum += mat[i][left];

            if (left != right) {
                sum += mat[i][right];
            }

            left++;
            right--;
        }

        return sum;
    }
};