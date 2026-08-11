static constexpr auto DIM{9uz};

class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(DIM);
        vector<unordered_set<char>> col(DIM);
        vector<unordered_set<char>> box(DIM);

        for (auto i{0uz}; i < DIM; ++i) {
            for (auto j{0uz}; j < DIM; ++j) {
                auto val{board[i][j]};
                if (val == '.') {
                    continue;
                }
                
                auto in_row{row[i].contains(val)};
                auto in_col{col[j].contains(val)};

                auto b{3 * (i / 3) + (j / 3)};
                auto in_box{box[b].contains(val)};

                if (in_row || in_col || in_box) {
                    return false;
                }

                row[i].insert(val);
                col[j].insert(val);
                box[b].insert(val);
            }
        }

        return true;
    }
};
