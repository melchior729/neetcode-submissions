static constexpr auto ALPHA_SIZE{26uz};
class Solution {
public:
    bool isAnagram(string s, string t) {
        auto size{s.length()};
        if (size != t.length()) {
            return false;
        }

        array<size_t, ALPHA_SIZE> seen{};
        for (auto i{0uz}; i < size; ++i) {
            seen[s[i] - 'a']++;
            seen[t[i] - 'a']--;
        }

        return all_of(seen.begin(), seen.end(), [](int n) {
            return n == 0;
        });
    }
};
