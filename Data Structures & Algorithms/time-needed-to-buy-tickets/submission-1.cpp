class Solution {
   public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        auto time{0};

        for (auto i{0uz}; i < tickets.size(); ++i) {
            if (i <= k) {
                time += min(tickets[i], tickets[k]);
            } else {
                time += min(tickets[i], tickets[k] - 1);
            }
        }

        return time;
    }
};