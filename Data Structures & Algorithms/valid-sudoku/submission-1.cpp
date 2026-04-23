class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        constexpr int n = 9;
        std::array<int, n> rows{};
        std::array<int, n> cols{};
        std::array<int, n> boxes{};
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int v = board[i][j];
                if (v == '.') {
                    continue;
                }

                v -= '0';
                int mask = 1 << v;
                int k = 3 * (i / 3) + (j / 3);

                if ((rows[i] & mask) || (cols[j] & mask) || (boxes[k] & mask)) {
                    cout << v << endl;
                    cout << rows[i] << endl;
                    cout << cols[j] << endl;
                    cout << boxes[k] << endl;
                    cout << i << " " << j;
                    return false;
                }

                rows[i] |= mask;
                cols[j] |= mask;
                boxes[k] |= mask;
            }
        }

        return true;
    }
};
