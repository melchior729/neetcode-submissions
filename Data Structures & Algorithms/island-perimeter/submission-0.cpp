class Solution {
   public:
    int islandPerimeter(vector<vector<int>>& grid) {
        auto perimeter{0};
        for (auto i{0uz}; i < grid.size(); ++i) {
            for (auto j{0uz}; j < grid[0].size(); ++j) {
                if (!grid[i][j]) {
                    continue;
                }

                auto p{0};
                p += i == 0 || !grid[i - 1][j];
                p += i == grid.size() - 1 || !grid[i + 1][j];
                p += j == 0 || !grid[i][j - 1];
                p += j == grid[0].size() - 1 || !grid[i][j + 1];
                perimeter += p;
            }
        }

        return perimeter;
    }
};