#include <cstring>

class Solution {
   public:
    static constexpr int alpha_size{26};

    bool isAnagram(string s, string t) {
        auto size{s.length()};
        if (size != t.length()) {
            return false;
        }

        int s_letters[alpha_size]{};
        int t_letters[alpha_size]{};

        for (size_t i{}; i < size; ++i) {
            auto si{s[i] - 'a'};
            auto ti{t[i] - 'a'};

            s_letters[si]++;
            t_letters[ti]++;
        }

        return std::memcmp(s_letters, t_letters, sizeof(int) * alpha_size) == 0;
    }
};
