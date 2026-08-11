class Solution {
public:
    bool isValid(string s) {
        vector<char> braces{};

        for (const auto &c : s) {
            if (c == '(' || c == '{' || c == '[') {
                braces.push_back(c);                 
                continue;
            } else {
                if (braces.empty()) {
                    return false;
                }
                
                auto top{braces.back()};
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                    return false;
                }

                braces.pop_back();
            }
        }

        return braces.empty();
    }
};
