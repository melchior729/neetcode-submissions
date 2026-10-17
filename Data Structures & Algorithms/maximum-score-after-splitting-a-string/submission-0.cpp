inline int cbit(const std::string& score, int bit) {
    auto count{0};
    auto len{score.length()};
    for (auto i{0uz}; i < len; ++i) {
        auto v{score[len - i - 1] - '0'};
        if (!(v ^ bit)) {
            count++;
        }
    }

    return count;
}

class Solution {
public:
    int maxScore(string s) {
        auto max_score{0};

        for (auto i{0uz}; i < s.size(); ++i) {
            auto l_score{s.substr(0, i + 1)};
            auto r_score{
                (i != s.size() - 1) ? 
                (s.substr(i + 1, s.size() - i - 1)) : 
                ""
            };

            max_score = std::max(
                cbit(l_score, 0) + cbit(r_score, 1),
                max_score
            );
        }

        return max_score;
    }
};