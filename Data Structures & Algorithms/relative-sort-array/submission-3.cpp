class Solution {
   public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        array<int, 1001> freq = {};
        for (const auto& n : arr1) {
            freq[n]++;
        }

        vector<int> res{};
        for (const auto& n : arr2) {
            for (auto i{0}; i < freq[n]; ++i) {
                res.push_back(n);
            }

            freq[n] = 0;
        }

        for (auto i{0uz}; i <= 1000; ++i) {
            if (freq[i] == 0) {
                continue;
            }

            for (auto j{0}; j < freq[i]; ++j) {
                res.push_back(i);
            }
        }

        return res;
    }
};