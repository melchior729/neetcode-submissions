class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        auto prefix{strs[0]};
        
        for (auto i{1uz}; i < strs.size(); ++i) {

            auto built{""s};
            auto min_str_len{min(strs[i].size(), prefix.size())};

            for (auto j{0}; j < min_str_len; ++j) {
                if (prefix[j] != strs[i][j]) {
                    break;
                }

                built += prefix[j];
            }

            if (built.empty()) {
                return "";
            }

            if (built.size() < prefix.size()) {
                prefix = built;
            }
        }

        return prefix;
    }
};