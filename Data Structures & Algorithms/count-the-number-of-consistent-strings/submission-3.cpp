class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        array<bool, 26> present{};
        auto count{0};

        for (const auto &c : allowed) {
            present[c - 'a'] = true;
        }

        for (const auto &word : words) {
            auto valid{true};
            for (const auto &c : word) {
                if (!present[c - 'a']) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        } 

        return count;
    }
};