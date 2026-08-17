class Solution {
   public:
    int heightChecker(vector<int>& heights) {
        array<int, 100> counts = {};

        for (const auto& i : heights) {
            counts[i - 1]++;
        }

        auto H{0};
        while (counts[H] == 0) {
            ++H;
        }

        auto invalid{0};
        for (auto i{0uz}; i < heights.size(); ++i) {
            auto expected{H + 1};
            counts[H]--;

            if (heights[i] != expected) {
                invalid++;
            }

            while (H < 100 && counts[H] == 0) {
                H++;
            }
        }

        return invalid;
    }
};