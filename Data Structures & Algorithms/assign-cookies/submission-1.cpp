class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());

        auto res{0};
        auto R{0uz};

        for (const auto &child : g) {
            if (R == s.size()) {
                break;
            }
            
            if (s[R] >= child) {
                res++;
                R++;
            }
        }

        return res;
    }
};