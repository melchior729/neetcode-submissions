class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        /*

        [2, 3, 2] = 7 (k = 1)




        [2, 3, 4] = 7 (k = 1)

        3 + 3 + 2 = 8

        */ 

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