class Solution {
   public:
    bool isAlienSorted(vector<string>& words, string order) {
        array<int, 26> indices{};
        for (auto i{0uz}; i < order.length(); ++i) {
            indices[order[i] - 'a'] = i;
        }

        for (auto i{1uz}; i < words.size(); ++i) {
            const auto &a{words[i - 1]}, &b{words[i]};
            auto min_len{static_cast<int>(min(a.size(), b.size()))};
            auto finished{false};

            for (auto i{0uz}; i < min_len; ++i) {
                if (a[i] != b[i]) {
                    auto a_tl{indices[a[i] - 'a']};
                    auto b_tl{indices[b[i] - 'a']};

                    if (a_tl > b_tl) {
                        return false;
                    }

                    finished = true;
                    break;
                }
            }

            if (!finished && a.size() > b.size()) {
                return false;
            }
        }

        return true;
    }
};