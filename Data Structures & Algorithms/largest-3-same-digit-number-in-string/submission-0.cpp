class Solution {
   public:
    string largestGoodInteger(string num) {
        const auto is_good{[](string s) {
            return s == "111" || s == "222" || s == "333" || s == "444" || s == "555" ||
                   s == "666" || s == "777" || s == "888" || s == "999" || s == "000";
        }};

        auto goodest{""s};

        for (auto i{2uz}; i < num.length(); ++i) {
            auto window{num.substr(i - 2, 3)};
            if (is_good(window)) {
                if (window > goodest) {
                    goodest = window;
                }
            }
        }

        return goodest;
    }
};