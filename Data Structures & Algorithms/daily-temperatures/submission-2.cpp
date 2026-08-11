class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> largest{};
        auto size{temperatures.size()};
        vector<int> res(size);

        for (auto i{size}; i --> 0;) {
            while (!largest.empty() && temperatures[largest.top()] <= temperatures[i]) {
                largest.pop();
            }

            res[i] = largest.empty() ? 0 : largest.top() - i;
            largest.push(i);
        }

        return res;
    }
};
