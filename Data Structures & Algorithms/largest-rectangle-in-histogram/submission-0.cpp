class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        auto size{static_cast<int>(heights.size())};
        if (size == 1) {
            return heights[0];
        }

        vector<pair<int, int>> stored{};
        auto max_area{0};

        for (auto i{0}; i < size; ++i) {
            auto height{heights[i]};
            auto start{i};
            while (!stored.empty() && stored.back().second > height) {
                auto &[idx, h]{stored.back()};
                stored.pop_back();
                max_area = max(max_area, h * (i - idx));
                start = idx;
            }

            stored.push_back({start, height});
        }

        for (const auto &[i, height] : stored) {
            max_area = max(max_area, height * (size - i));
        }

        return max_area;
    }
};
