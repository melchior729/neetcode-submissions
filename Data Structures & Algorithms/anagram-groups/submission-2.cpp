#include <algorithm>

class Solution {
public:
/*

The problem relies on anagrams, and sorting anagrams will make the same string. Since we have to return a list of the words,
use a map of sorted -> list of unsorted.

Declare a map from string to vector<string>.
iterate through the strings provided.
sort the string alphabetically, this is the key
append the non-sorted string to map[sorted_str].

at the end, get the values, wrap in a vector, and return
*/
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sort_to_list;

        for (const string& str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            sort_to_list[sorted].push_back(str);
        }

        vector<vector<string>> anagrams;

        for (const auto& pair : sort_to_list) {
            anagrams.push_back(pair.second);
        }

        return anagrams;
    }
};
