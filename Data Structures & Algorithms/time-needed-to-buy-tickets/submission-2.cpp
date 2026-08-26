class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        auto sum{0};
        for (auto i{0uz}; i < tickets.size(); ++i) {
            if (i <= k) {
                sum += min(tickets[k], tickets[i]);
            }

            else {
                sum += min(tickets[k] - 1, tickets[i]);
            }
        }

        return sum;
    }
};