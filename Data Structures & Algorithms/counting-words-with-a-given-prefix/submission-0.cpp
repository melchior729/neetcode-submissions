class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        auto count{0};
        for (const auto &word : words) {
            count += word.starts_with(pref);
        } 

        return count;
    }
};