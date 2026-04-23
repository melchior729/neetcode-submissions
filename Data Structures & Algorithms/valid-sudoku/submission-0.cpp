class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        vector<unordered_set<int>> rows(n);
        vector<unordered_set<int>> cols(n);
        vector<unordered_set<int>> boxes(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int v = board[i][j] - '0';

                if (v < 0 || v > n) {
                    continue;
                }

                if (rows[i].contains(v)) {
                    return false;
                }
                rows[i].insert(v);

                if (cols[j].contains(v)) {
                    cout << i << " " << j << endl;
                    return false;
                }
                cols[j].insert(v);

                int k = 3 * (i / 3) + (j / 3);
                if (boxes[k].contains(v)) {
                    return false;
                }
                boxes[k].insert(v);
            }
        }

        return true;
    }
};
