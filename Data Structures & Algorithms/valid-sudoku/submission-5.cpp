static constexpr auto BOARD_DIM{9};

using Container = std::array<uint16_t, BOARD_DIM>;

class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        Container row{};
        Container col{};
        Container box{};

        for (auto i{0uz}; i < BOARD_DIM; ++i) {
            for (auto j{0uz}; j < BOARD_DIM; ++j) {
                auto entry{board[i][j]};
                if (entry == '.') {
                    continue;
                }

                auto shifted{(1 << ((entry - '0') - 1))};
                auto in_row {row[i] & shifted};
                auto in_col {col[j] & shifted};

                auto b{3 * (i / 3) + (j / 3)};
                auto in_box {box[b] & shifted};

                if (entry -'0' == 4) {
                   std::cout << i << j; 
                }

                if (in_row || in_col || in_box) {
                    return false;
                }
                
                row[i] |= shifted;
                col[j] |= shifted;
                box[b] |= shifted;
            }
        }

        return true;
    }
};