class Solution {
   public:
    bool wordPattern(string pattern, string s) {
        vector<string> words{};
        stringstream ss{s};
        auto word{""s};

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) {
            return false;
        }

        array<string, 26> mapping{};
        unordered_set<string> seen{};

        for (auto i{0}; i < pattern.size(); ++i) {
            auto c{pattern[i]};
            auto word{words[i]};

            auto idx{c - 'a'};
            auto entry{mapping[idx]};

            if (!entry.empty() && mapping[idx] != word) {
                return false;
            }

            if (entry.empty())  {
                if (seen.contains(word)) {
                    return false;
                }

                mapping[idx] = word;
                seen.insert(word);

                
            }
        }

        return true;
    }
};