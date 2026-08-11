class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> points{};

        for (const auto& str : operations) {
            if (str == "+") {
                auto first{points.top()};
                points.pop();
                auto second{points.top()};
                points.push(first);
                points.push(first + second);
            }

            else if (str == "C") {
                points.pop();
            }

            else if (str == "D") {
                points.push(2 * points.top());
            }
            
            else {
                points.push(stoi(str));
            }
        }

        auto sum{0};
        while (!points.empty()) {
            sum += points.top();
            points.pop();
        }

        return sum;
    }
};