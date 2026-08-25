class Solution {
public:
    int maxDepth(string s) {
        auto max_depth{0};
        auto depth{0};
        for (const auto &c : s) {
            if (c == '(') {
                max_depth = max(max_depth, ++depth);
            } else if (c == ')') {
                depth--;
            }
        }

        return max_depth;
    }
};