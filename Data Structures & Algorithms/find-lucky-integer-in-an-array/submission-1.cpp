class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq{};

        for (const auto &n : arr) {
            freq[n]++;
        }

        auto max{-1};
        for (const auto &[k, v] : freq) {
            if (k == v && k > max) {
                max = k;
            }
        }

        return max;
    }
};