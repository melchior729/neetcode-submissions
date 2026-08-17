class Solution {
public:

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }

        auto placable{0};
        auto size{flowerbed.size()};
        for (auto i{0uz}; i < size; ++i) {
            auto flower{flowerbed[i]};

            if (!flower) {
                auto left{i > 0 ? flowerbed[i - 1] : 0};
                auto right{i < size - 1 ? flowerbed[i + 1] : 0};

                if (!(left || right)) {
                    placable++;
                    if (placable == n) {
                        return true;
                    }

                    flowerbed[i] = 1;
                }
            }
        }

        return placable == n;
    }
};