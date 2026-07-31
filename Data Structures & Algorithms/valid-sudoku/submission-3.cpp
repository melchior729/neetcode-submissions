static constexpr auto BOARD_DIM{9};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::vector<unordered_set<char>> rows(BOARD_DIM);
        std::vector<unordered_set<char>> cols(BOARD_DIM);
        std::vector<unordered_set<char>> boxes(BOARD_DIM);

        for (auto k{0uz}; k < BOARD_DIM * BOARD_DIM; ++k) {
            auto r{k / BOARD_DIM};
            auto c{k % BOARD_DIM};
            auto b{3 * (r / 3) + (c / 3)};

            auto val{board[r][c]};

            if (val == '.') {
                continue;
            }
            
            if (rows[r].contains(val) || cols[c].contains(val) || boxes[b].contains(val)) {
                std::cout << r << " " << c << " " << b;
                return false;
            }

            rows[r].insert(val);
            cols[c].insert(val);
            boxes[b].insert(val);
        }

        return true;
    }
};
