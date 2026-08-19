class Solution {
   public:
    vector<int> frequencySort(vector<int>& nums) {
        array<int, 201> freq = {};

        for (const auto& n : nums) {
            freq[n + 100]++;
        }

        auto res{nums};

        sort(res.begin(), res.end(), [&freq](const int a, const int b) {
            if (freq[a + 100] != freq[b + 100]) {
                return freq[a + 100] < freq[b + 100];
            }

            return a > b;
        });
        
        return res;
    }
};