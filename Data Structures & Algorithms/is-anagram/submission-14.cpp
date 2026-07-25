#include <cstring>

class Solution {
   public:
    static constexpr int alpha_size{26};

    bool isAnagram(string s, string t) {
        auto size{s.length()};
        if (size != t.length()) {
            return false;
        }

        std::array<int, alpha_size> counts{};

        for (size_t i{}; i < size; ++i) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }

        return std::all_of(counts.begin(), counts.end(), [](int n) {
            return n == 0;
        });
    }
};
