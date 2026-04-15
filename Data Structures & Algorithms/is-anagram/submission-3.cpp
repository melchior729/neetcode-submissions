class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        } 

        std::unordered_map<char, size_t> countS;
        std::unordered_map<char, size_t> countT;

        for (char ch : s) {
            countS[ch]++;
        }

        for (char ch : t) {
            countT[ch]++;
        }

        return countS == countT;    
    }
};
