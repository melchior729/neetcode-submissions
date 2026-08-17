class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> chars{allowed.begin(), allowed.end()};
        auto count{0};

        for (const auto &word : words) {
            auto valid{true};
            for (const auto &c : word) {
                if (!chars.contains(c)) {
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