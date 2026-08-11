class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // build stack of nums
        // make vector res

        // loop backwards
        // if the stack is empty, then store the index.
        // if the stack is not empty,
            // continously pop it while the value is >= the current on the stack
            // write it there
        
        // set result @ i to stack.top() - i; // since thsi is the difference

        // return it?

        stack<int> future_temps{};
        auto size{temperatures.size()};
        vector<int> daily(size);

        for (auto i{size}; i --> 0;) {
            auto temp{temperatures[i]};
            while (!future_temps.empty() && temp >= temperatures[future_temps.top()]) {
                future_temps.pop();
            }

            daily[i] = future_temps.empty() ? 0 : future_temps.top() - i;
            future_temps.push(i);
        }

        return daily;
    }
};
