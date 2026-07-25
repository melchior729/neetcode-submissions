class Solution {
public:
    bool isAnagram(string s, string t) {
        // anagram is when same number of used chars
        // how to track char and number?
        // map.
        // so we need to use 2 maps for this.
        // fill them up and return true if they are the same

        auto size{s.length()};
        if (size != t.length()) {
            return false;
        }

        unordered_map<char, int> s_count{};
        unordered_map<char, int> t_count{};

        for (size_t i{}; i < size; ++i) {
            auto s_ch{s[i]};
            auto t_ch{t[i]};

            s_count[s_ch]++;
            t_count[t_ch]++;
        }

        return s_count == t_count;
    }
};
