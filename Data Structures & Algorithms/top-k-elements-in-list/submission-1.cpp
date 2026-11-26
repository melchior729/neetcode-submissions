class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (const auto n : nums) {
            freq[n]++;
        }

        vector<pair<int, int>> sorted_freq{freq.begin(), freq.end()};

        sort(sorted_freq.begin(), sorted_freq.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });

        vector<int> k_freq;
        for (auto i{0}; i < k; ++i) {
            k_freq.push_back(sorted_freq[i].first); 
        }

        return k_freq;
    }
};
