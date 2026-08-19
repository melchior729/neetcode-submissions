class Solution {
   public:
    bool isAlienSorted(vector<string>& words, string order) {
        array<int, 26> rank{};
        for (int i = 0; i < 26; ++i) {
            rank[order[i] - 'a'] = i;
        }

        for (size_t i = 1; i < words.size(); ++i) {
            const auto& left = words[i - 1];
            const auto& right = words[i];

            bool diff_found = false;
            size_t min_len = min(left.size(), right.size());

            for (size_t j = 0; j < min_len; ++j) {
                if (left[j] != right[j]) {
                    if (rank[left[j] - 'a'] > rank[right[j] - 'a']) {
                        return false;
                    }
                    diff_found = true;
                    break;
                }
            }

            if (!diff_found && left.size() > right.size()) {
                return false;
            }
        }

        return true;
    }
};