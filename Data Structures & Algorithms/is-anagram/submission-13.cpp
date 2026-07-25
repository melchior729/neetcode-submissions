#include <cstring>

class Solution {
   public:
    static constexpr int alpha_size{26};

    bool isAnagram(string s, string t) {
        auto size{s.length()};
        if (size != t.length()) {
            return false;
        }

        std::array<int, alpha_size> s_letters{};
        std::array<int, alpha_size> t_letters{};

        for (size_t i{}; i < size; ++i) {
            auto si{s[i] - 'a'};
            auto ti{t[i] - 'a'};

            s_letters[si]++;
            t_letters[ti]++;
        }

        return s_letters == t_letters;
    }
};
