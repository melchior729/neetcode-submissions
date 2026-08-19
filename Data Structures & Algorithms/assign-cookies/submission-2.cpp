class Solution {
   public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());
        auto res{0};

        auto R{0uz};
        for (auto L{0uz}, R{0uz}; L < g.size() && R < s.size(); L++) {
            if (s[R] >= g[L]) {
                res++;
                R++;
            }
        }

        return res;
    }
};