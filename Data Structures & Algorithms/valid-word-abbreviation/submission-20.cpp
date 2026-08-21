class Solution {
   public:
    bool validWordAbbreviation(string word, string abbr) {
        auto n{word.length()};
        auto m{abbr.length()};

        auto W{0uz};
        auto A{0uz};

        while (W < n && A < m) {
            if (word[W] == abbr[A]) {
                W++;
                A++;
                continue;
            }

            if (!isdigit(abbr[A]) || abbr[A] == '0') {
                return false;
            }

            auto spaces{0uz};

            auto S{A};
            while (S < m && isdigit(abbr[S])) {
                spaces = spaces * 10 + (abbr[S] - '0');
                S++;
            }

            if (W + spaces > n) {
                return false;
            }

            W += spaces;
            A = S;
        }

        return W == n && A == m;
    }
};