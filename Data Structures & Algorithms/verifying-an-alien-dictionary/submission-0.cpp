class Solution {
   public:
    bool isAlienSorted(vector<string>& words, string order) {
        /*

        freq = [0] * 26
        for c in order:
            freq[c - 'a']++

        for i = 1, i < len(words), ++i:
            a = words[i - 1]
            b = words[i]

            left = 0
            right = 0

            while left < len(a) AND right < len(b):
                if a[left] != b[right] && freq[a[left]] > freq[b[right]]:
                    return false

                ++right
                ++left

            if len(a) > len(b):
                return false

        return true
        */

        array<int, 26> indices{};
        for (auto i{0uz}; i < order.length(); ++i) {
            indices[order[i] - 'a'] = i;
        }

        int x = 0;
        for (auto n : indices) {
            cout << char('a' + x++) << " : " << n << endl;
        }

        for (auto i{1uz}; i < words.size(); ++i) {
            const auto &a{words[i - 1]}, &b{words[i]};
            auto min_len{static_cast<int>(min(a.size(), b.size()))};
            auto finished{false};

            for (auto i{0uz}; i < min_len; ++i) {
                if (a[i] != b[i]) {
                    auto a_tl{order[indices[a[i]]]};
                    auto b_tl{order[indices[b[i]]]};

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