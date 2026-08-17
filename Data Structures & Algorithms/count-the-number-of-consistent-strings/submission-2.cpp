class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        array<char, 26> counts{};
        auto count{0};

        for (const auto &c : allowed) {
            counts[c - 'a']++;
        }

        for (const auto &word : words) {
            auto valid{true};
            for (const auto &c : word) {
                if (counts[c - 'a'] == 0) {
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