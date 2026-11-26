class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        array<int, 26> seen{};

        for (auto i{0uz}; i < s.length(); ++i) {
           seen[s[i] - 'a']++; 
           seen[t[i] - 'a']--; 
        }

        return std::all_of(seen.begin(), seen.end(), [](int x){ return x == 0; });
    }
};
