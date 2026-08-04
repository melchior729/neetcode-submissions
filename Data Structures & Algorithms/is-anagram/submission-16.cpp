static constexpr auto ALPHA_SIZE{26uz};

class Solution {
   public:
    bool isAnagram(string s, string t) {
        auto size{s.length()};
        if (size != t.length()) {
            return false;
        }

        std::array<char, ALPHA_SIZE> letters{};
        for (auto i{0uz}; i < size; ++i) {
            letters[s[i] - 'a']++;
            letters[t[i] - 'a']--;
        }

        return std::all_of(letters.begin(), letters.end(), [](int n) {
            return n == 0;
        });
    }
};
