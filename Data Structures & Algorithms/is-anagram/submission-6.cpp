class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        if (n != t.length()) {
            return false;
        }

        std::array<int, 26> count{0};

        for (int i = 0; i < n; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        return all_of(count.begin(), count.end(), [](int i) { return i == 0; });
    }
};
