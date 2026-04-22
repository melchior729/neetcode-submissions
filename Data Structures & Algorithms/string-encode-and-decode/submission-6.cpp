class Solution {

char DELIMITER = '#';

public:
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
        string str{};

        int n = s.length();
        int i = 0;
        int k = 0;
        bool delimiter_read{};

        while (i < n) {

            if (delimiter_read) {
                str += s[i];

                k--;
                if (k == 0) {
                    delimiter_read = false;
                    decoded.push_back(str);
                    str.clear(); 
                }

                i++;
            } 
            
            else {
                int j;
                for (j = i; s[j] != DELIMITER; j++);

                int length = stoi(s.substr(i, j - i));
                i = ++j; 
                k = length;
                
                delimiter_read = length != 0;

                if (length == 0) {
                    decoded.push_back("");
                }
            }
        }

        return decoded;
    }
};
