class Solution {
/**

Whenever we have to use data with seemingly impossible restrictions, try to add the needed data to the data itself.
In this case, we need to know when the string starts and ends. This is actually defined by the length of the string, so we can use that.
But if a string is '5xxxxx', and we add the length, then it will become '65xxxxx'. How do we know when the number ends?
Simply use another character, in this case '#'. So it will be '6#5xxxxx'. Since the start of everything string is guaranteed to start with a number
and a delimiter, we can easily loop through the encoded string now and decipher it.

ENCODE:
    declare an empty string
    loop through all strings
        add the length of the current string to the encoded string
        add the delimiter to the encoded string
        add the current string to the encoded string
    return the encoded string

DECODE:
    declare an empty vector of strings
    loop from 0 to to the length of the encoded string
        find the index of the next delimiter
        take the substring from i to the index of the delimiter to get the string for the length
        convert the length str to an int for the actual length
        set i to the index after the delimiter index
        take the substring from i to i + length, that is an encoded string
        add that substring to the vector of strings
        i = i + length, to get to the next length description
    return the vector

Time: O(N) for both
Space: O(N) for both

*/
public:

    static constexpr char DELIMITER{'#'};

    string encode(vector<string>& strs) {
        string encoded{};
        for (const string& str : strs) {
            encoded += to_string(str.length()) + DELIMITER + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded{};
        size_t n = s.size();
        size_t i = 0;

        while (i < n) {
            size_t delim_i = s.find(DELIMITER, i); 
            int length = stoi(s.substr(i, delim_i - i));
            i = delim_i + 1;
            decoded.push_back(s.substr(i, length));
            i += length;
        }

        return decoded;
    }
};