class Solution {
public:
/**

The problem relies on the frequency of the characters of s and t being the same, so use a frequency array.
One string will increment the count, the other will decrement the count. At the end, all entries should be 0,
as they cancel out if they are anagrams.

If the lengths of the two strings are not the same, return false.
Declare an array of size 26 (english lowercase letters), filled with 0.
Iterate through both strings.
    For the letters in S, increment the corresponding spot in the array
    For the letters in T, decrement the spot in the array
Return true if all values in the list are 0, false otherwise.

Time: O(N) as we have to iterate through the strings of size N.
Space: O(1) as the array that we are making is always the same size (26).

*/
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
