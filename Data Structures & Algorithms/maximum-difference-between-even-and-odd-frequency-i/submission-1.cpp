class Solution {
public:
    int maxDifference(string s) {
        array<int, 26> occur;
        occur.fill(0);
        
        for (const auto &c : s) {
            occur[c - 'a']++;
        }

        auto odd_freq{0};
        auto even_freq{101};

        for (auto i{0uz}; i < occur.size(); ++i) {
            auto v{occur[i]};

            if (v == 0) {
                continue;
            }

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