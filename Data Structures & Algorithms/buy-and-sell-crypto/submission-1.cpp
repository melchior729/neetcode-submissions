class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto li{-1};
        auto hi{-1};
        auto low{101};
        auto high{0};
        auto profit{0};

        for (auto i{0uz}; i < prices.size(); ++i) {
            auto price{prices[i]};
            if (price < low) {
                low = price;
                high = price;
                li = i; 
                hi = i;
            }

            if (price >= high) {
                high = price;
                hi = i;
            }
            
            auto curr_profit{high - low};
            if (curr_profit > profit && li <= hi) {
                profit = curr_profit;
            }
        }

        return profit;
    }
};
