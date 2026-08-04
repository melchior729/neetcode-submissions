static constexpr auto BOARD_DIM{9};

class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> rows(BOARD_DIM);
        unordered_map<int, unordered_set<int>> cols(BOARD_DIM);
        unordered_map<int, unordered_set<int>> boxes(BOARD_DIM);

        for (auto i{0uz}; i < BOARD_DIM; ++i) {
            for (auto j{0uz}; j < BOARD_DIM; ++j) {
                auto val{board[i][j]};
                if (val == '.') {
                    continue;
                }

                auto in_row{rows[i].contains(val)};
                auto in_col{cols[j].contains(val)};

                auto b{3 * (i / 3) + (j / 3)};
                auto in_box{boxes[b].contains(val)};

                if (in_row || in_col || in_box) {
                    return false;
                }

                rows[i].insert(val);
                cols[j].insert(val);
                boxes[b].insert(val);
            }
        }

        return true;
    }
};
