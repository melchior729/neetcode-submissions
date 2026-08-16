class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> strings{words.begin(), words.end()};
        vector<string> matching{};

        for (const auto &word : words) {
            for (const auto &check : words) {
                if (word != check && check.contains(word)) {
                    matching.push_back(word);
                    break;
                }
            }
        }

        return matching;
    }
};