class Solution {
   public:
    bool validWordAbbreviation(string word, string abbr) {
        auto n{word.length()};
        auto m{abbr.length()};

        auto W{0uz};
        auto A{0uz};

        while (W < n && A < m) {
            if (word[W] != abbr[A]) {
                if (!isdigit(abbr[A])) {
                    return false;
                }

                if (abbr[A] == '0') {
                    return false;
                }

                auto S{A};

                auto spaces{0uz};
                while (S < m && isdigit(abbr[S])) {
                    spaces = spaces * 10 + (abbr[S] - '0');
                    S++;
                } 

                if (W + spaces > n) {
                    return false;
                }

                W += spaces;
                A = S;

                continue;
            }

            W++;
            A++;
        }

        return W == n && A == m;
    }
};