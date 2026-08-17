class Solution {
public:
    int findLucky(vector<int>& arr) {
        array<int, 501> freq = {};

        for (const auto &n : arr) {
            freq[n]++;
        }

        auto max{-1};
        for (auto k{1}; k < 501; k++) {
            if (k == freq[k] && k > max) {
                max = k;
            }
        }

        return max;
    }
};