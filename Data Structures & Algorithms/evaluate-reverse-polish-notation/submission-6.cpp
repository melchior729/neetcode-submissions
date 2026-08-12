class Solution {
    bool is_valid_num(const string& str) {
        auto val{0};
        auto [ptr, ec]{from_chars(str.data(), str.data() + str.size(), val)};
        return ec == errc() && ptr == str.data() + str.size();
    }

   public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.size() < 3) {
            return stoi(tokens[0]);
        }

        vector<int> seen{};

        for (const auto& t : tokens) {
            if (is_valid_num(t)) {
                seen.push_back(stoi(t));
                continue;
            }

            auto second{seen.back()};
            seen.pop_back();
            auto first{seen.back()};
            seen.pop_back();

            auto operation{t[0]};
            auto res{0};

            if (operation == '+') {
                res = first + second;
            }

            else if (operation == '-') {
                res = first - second;
            }

            else if (operation == '*') {
                res = first * second;
            }

            else {
                res = first / second;
            }

            seen.push_back(res);
        }
        
        return seen.back();
    }
};
