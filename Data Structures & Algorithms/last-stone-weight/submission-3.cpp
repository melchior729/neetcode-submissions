class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());

        while (stones.size() > 1) {
            auto y{stones.back()};
            stones.pop_back();
            auto x{stones.back()};
            stones.pop_back();

            if (y > x) {
                auto it{lower_bound(stones.begin(), stones.end(), y - x)};
                stones.insert(it, y - x);
            }
        }

        return stones.size() == 0 ? 0 : stones[0];
    }
};
