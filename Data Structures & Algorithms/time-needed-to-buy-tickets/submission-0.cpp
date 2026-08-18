class Solution {
   public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        auto res{0};

        for (auto i{0uz}; i < tickets.size(); ++i) {
            if (i <= k) {
                res += min(tickets[i], tickets[k]);
            } else {
                res += min(tickets[i], tickets[k] - 1);
            }
        }

        return res;
    }
};