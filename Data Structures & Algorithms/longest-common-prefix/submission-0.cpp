class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*
        if len(strs) == 0 or strs[0] == "":
            return ""
        
        prefix = strs[0]

        for str in strs:
            if str == "" or prefix == "":
                return ""

            for i in range(min(len(prefix), len(str)):
                if prefix[i] != str[i]:
                    prefix = prefix[0 : i]

        return prefix 
        */

        auto size{strs.size()};
        if (size == 0) {
            return "";
        }

        auto prefix{strs[0]};

        for (const auto& str : strs) {
            if (str == "" || prefix == "") {
                return "";
            }

            auto min{std::min(prefix.size(), str.size())};
            auto i{0uz};
            for (; i < min; ++i) {
                if (prefix[i] != str[i]) {
                    prefix = prefix.substr(0, i);
                    break;
                }
            }
            
            prefix = prefix.substr(0, min);
        }

        return prefix;
    }
};