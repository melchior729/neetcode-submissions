class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        auto seen{0};
        for (const auto &str : arr) {
            auto c{count(arr.begin(), arr.end(), str)};
            if (c == 1) {
                seen++;
                if (seen == k) {
                    return str;
                }
            }
        }

        return "";
    }
};