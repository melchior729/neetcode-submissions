class Solution {
public:

    char DELIMITER{'#'};

    string encode(vector<string>& strs) {
        string encoded{};
        for (const auto& str : strs) {
            encoded += to_string(str.length());
            encoded += DELIMITER;
            encoded += str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded{};
        
        bool parsing_word{};
        int i = 0;
        int n = s.length();
        int chars_to_read = 0;
        string str{};

        while (i < n) {
            if (parsing_word) {
                str += s[i++];
                chars_to_read--;

                if (chars_to_read == 0) {
                    parsing_word = false;
                    decoded.push_back(str);
                    str.clear();
                }
            } else {
                int j;
                for (j = i; s[j] != DELIMITER; j++);

                int len = stoi(s.substr(i, j - i));
                if (len == 0) {
                    decoded.push_back("");
                }

                chars_to_read = len;
                parsing_word = len != 0;
                i = ++j;
            }
        }

        return decoded;
    }
};
