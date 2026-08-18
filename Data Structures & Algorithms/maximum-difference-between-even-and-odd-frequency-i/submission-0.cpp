class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> occur{};
        for (const auto &c : s) {
            occur[c]++;
        }
        auto odd_freq{0};
        auto even_freq{101};
        for (const auto &[k, v] : occur) {
            if (v % 2 == 1 && v > odd_freq) {
                odd_freq = v;
            }

            if (v % 2 == 0 && v < even_freq) {
                even_freq = v;
            }
        }

        return odd_freq - even_freq;
    }
};