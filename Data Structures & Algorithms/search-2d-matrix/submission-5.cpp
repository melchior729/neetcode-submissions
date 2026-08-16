class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto rows{static_cast<int>(matrix.size())};
        auto cols{static_cast<int>(matrix[0].size())};

        auto L{0}, R{rows * cols - 1};
        while (L <= R) {
            auto M{(L + R) / 2};

            auto v{matrix[M / cols][M % cols]};
            if (v > target) {
                R = M - 1;
                continue;
            }

            else if (v < target) {
                L = M + 1;
                continue;
            }
            
            return true;
        }

        return false;
    }
};