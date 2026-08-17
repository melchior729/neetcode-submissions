class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        array<char, 26> chs{};
        auto count{0};

        for (const auto &c : chars) {
            chs[c - 'a']++;
        }

        for (const auto &word : words) {
            auto copy{chs};
            auto valid{true};
            for (const auto &c : word) {
                copy[c - 'a']--;

                if (copy[c - 'a'] < 0) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count += word.size();
            }
        }
        
        return count;
    }
};