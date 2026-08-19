class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        /*

        Choose 2 elements from the list, such that their sum is minimized.

        left_over = money - sum
        return left_over == 0 : money : left_over

        [2, 5, 1, 2]

        [1, 2, 2, 5]                m = 3

        1 + 2 = 3.

        */       

        sort(prices.begin(), prices.end());
        auto sum{prices[0] + prices[1]};
        auto left_over{money - sum};
        return left_over < 0 ? money : left_over;
    }
};