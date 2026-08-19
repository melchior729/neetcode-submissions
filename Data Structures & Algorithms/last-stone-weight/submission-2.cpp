class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());

            auto first{stones.back()};
            stones.pop_back();
            auto second{stones.back()};
            stones.pop_back();

            auto result{first - second};
            if (result != 0) {
                stones.push_back(result);
            }
        }

        return stones.size() == 0 ? 0 : stones[0];
    }
};
