class Solution {
   public:
    int buyChoco(vector<int>& prices, int money) {
        auto min1{numeric_limits<int>::max()};
        auto min2{numeric_limits<int>::max()};

        for (const auto& price : prices) {
            if (price < min1) {
                min2 = min1;
                min1 = price;
            }

            else if (price < min2) {
                min2 = price;
            }
        }

        auto sum{min2 + min1};
        return money >= sum ? money - sum : money;
    }
};