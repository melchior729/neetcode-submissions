static constexpr auto BOARD_DIM{9};

class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::array<uint16_t, BOARD_DIM> rows{};
        std::array<uint16_t, BOARD_DIM> cols{};
        std::array<uint16_t, BOARD_DIM> boxes{};

        for (auto i{0uz}; i < BOARD_DIM; ++i) {
            for (auto j{0uz}; j < BOARD_DIM; ++j) {
                auto b{3 * (i / 3) + (j / 3)};
                auto entry{board[i][j]};

                if (entry == '.') {
                    continue;
                }

                auto num{entry - '0'};
                auto in_row{(rows[i] >> (num - 1)) & 1};
                auto in_col{(cols[j] >> (num - 1)) & 1};
                auto in_box{(boxes[b] >> (num - 1)) & 1};

                if (in_row || in_col || in_box) {
                   return false; 
                }

                rows[i] |= (1 << (num - 1));
                cols[j] |= (1 << (num - 1));
                boxes[b] |= (1 << (num - 1));
            }
        }

        return true;
    }
};
