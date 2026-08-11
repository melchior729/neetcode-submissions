class Solution {
    bool is_valid_int(const string& s) {
        int val;
        auto [ptr, ec]{from_chars(s.data(), s.data() + s.size(), val)};
        return ec == errc() && ptr == s.data() + s.size();
    }

   public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.size() < 3) {
            return stoi(tokens[0]);
        }

        stack<int> seen{};

        for (const auto& t : tokens) {
            if (is_valid_int(t)) {
                seen.push(stoi(t));
                continue;
            }

            auto second{seen.top()};
            seen.pop();
            auto first{seen.top()};
            seen.pop();
            auto res{0};

            auto c{t[0]};

            if (c == '+') {
                res = first + second;
            }

            else if (c == '-') {
                res = first - second;
            }

            else if (c == '*') {
                res = first * second;
            }

            else {
                res = first / second;
            }

            seen.push(res);
        }

        return seen.top();
    }
};