class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapping{};
        unordered_set<char> mapped_to{};

        for (auto i{0uz}; i < s.size(); ++i) {
            auto s_ch{s[i]};
            auto t_ch{t[i]};

            if (mapping.contains(s_ch)) {
                if (mapping[s_ch] != t_ch) {
                    return false;
                }
            } else {
                if (mapped_to.contains(t_ch)) {
                    return false;
                }

                mapping[s_ch] = t_ch;
                mapped_to.insert(t_ch);
            }
        }

        return true;
    }
};