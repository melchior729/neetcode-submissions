class Solution {
   public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }

        stack<char> seen{};

        for (const auto &c : s) {
            if (c == '[' || c == '{' || c == '(') {
                seen.push(c); 
                continue;
            } else {
                if (seen.empty()) {
                   return false; 
                }

                auto top{seen.top()};
                if ((c == ']' && top != '[') || (c == '}' && top != '{') || (c == ')' && top != '(')) {
                    return false;
                }
                seen.pop();
            }
        }

        return seen.empty();
    }
};
