class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        if (temperatures.size() == 1) {
            return {0};
        } 

        stack<pair<int, int>> largest{};
        auto size{temperatures.size()};
        vector<int> res(size);
        res[size - 1] = 0;

        for (auto i{size}; i --> 0;) {
            auto val{temperatures[i]};
            while (!largest.empty() && largest.top().first <= val) {
                largest.pop();
            }

            res[i] = largest.empty() ? 0 : largest.top().second - i;
            largest.push({val, i});
        }

        return res;
    }
};
