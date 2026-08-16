class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle{};
        triangle.push_back({1});

        for (auto i{1uz}; i < numRows; ++i) {
            triangle.push_back({});
            
            for (auto j{0uz}; j <= i; ++j) {
                if (j == 0 || j == i) {
                    triangle.back().push_back(1);
                    continue;
                }

                auto left{triangle[i - 1][j - 1]};
                auto right{triangle[i - 1][j]};
                auto val{left + right};
                triangle.back().push_back(val);
            }
        } 

        return triangle;
    }
};