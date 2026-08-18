class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq{};

        for (const auto &str : arr) {
            freq[str]++;
        }

        auto seen{0};
        for (const auto &str : arr) {
            if (freq[str] == 1) {
                seen++;
                if (seen == k) {
                    return str;
                }
            }
        }

        return "";
    }
};