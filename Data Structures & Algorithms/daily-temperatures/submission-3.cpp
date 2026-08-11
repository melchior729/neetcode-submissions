class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> largest{};
        auto size{temperatures.size()};
        vector<int> res(size);

        for (auto i{size}; i --> 0;) {
            while (!largest.empty() && temperatures[largest.back()] <= temperatures[i]) {
                largest.pop_back();
            }

            res[i] = largest.empty() ? 0 : largest.back() - i;
            largest.push_back(i);
        }

        return res;
    }
};
