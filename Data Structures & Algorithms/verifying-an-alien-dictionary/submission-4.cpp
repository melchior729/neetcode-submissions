class Solution {
   public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> indices{};
        for (auto i{0uz}; i < order.length(); ++i) {
            indices[order[i]] = i;
        }

        for (auto i{1}; i < words.size(); ++i) {
            auto left{words[i - 1]};
            auto right{words[i]};
            auto diff_found{false};

            for (auto j{0}; j < min(left.size(), right.size()); ++j) {
                auto lch{left[j]};
                auto rch{right[j]};

                if (lch != rch) {
                    if (indices[lch] > indices[rch]) {
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