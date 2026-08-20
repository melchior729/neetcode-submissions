class Solution {
   public:
    bool validWordAbbreviation(string word, string abbr) {
        /*
        W = 0
        A = 0
        while W < len(word) && A < len(abbr):
            w = word[W]
            a = abbr[A]
            if w != a:
                if !isdigit(a):
                    return false
                S = A
                found_non_zero = false
                while isdigit(abbr[S]):
                    if !found_non_zero:
                        if abbr[S] == '0':
                            return false
                        found_non_zero = true
                    S++
                num_str = abbr.substr(A, S - A);
                num = stoi(num_str)
                if W + num > len(word):
                    return false
                W += num - 1
                A = S - 1
            W++
            A++
        return W == len(word) && A == len(abbr)
        */

        auto W{0};
        auto A{0};

        while (W < word.length() && A < abbr.length()) {
            auto w{word[W]};
            auto a{abbr[A]};

            if (w != a) {
                if (!isdigit(a)) {
                    return false;
                }

                auto S{A};
                auto FNZ{false};
                while (S < abbr.length() && isdigit(abbr[S])) {
                    if (!FNZ) {
                        if (abbr[S] == '0') {
                            return false;
                        }

                        FNZ = true;
                    }

                    S++;
                } 

                auto spaces{stoi(abbr.substr(A, S - A))};
                if (W + spaces > word.length()) {
                    return false;
                }

                W += --spaces;
                A = --S;
            }

            W++;
            A++;
        }

        return W == word.length() && A == abbr.length();
    }
};