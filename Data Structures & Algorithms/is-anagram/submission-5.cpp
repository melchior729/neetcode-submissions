class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        } 

        std::array<int, 26> count{0};

        for (size_t i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        return std::all_of(count.begin(), count.end(), [](int i) { return i == 0; });
    }
};
