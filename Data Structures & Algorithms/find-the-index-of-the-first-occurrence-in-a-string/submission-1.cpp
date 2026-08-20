class Solution {
public:
    int strStr(string haystack, string needle) {
        auto n{static_cast<int>(needle.size())};
        for (auto i{n - 1}; i < haystack.size(); ++i) {
            if (haystack.substr(i - n + 1, n) == needle) {
                return i - n + 1;
            }
        }

        return -1;
    }
};