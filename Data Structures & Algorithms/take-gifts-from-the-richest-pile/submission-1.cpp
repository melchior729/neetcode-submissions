class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for (auto i{0uz}; i < k; i++) {
            sort(gifts.rbegin(), gifts.rend());
            gifts[0] = static_cast<int>(sqrt(gifts[0]));
        }

        auto sum{0};
        for (const auto &gift : gifts) {
            sum += gift; 
        }

        return sum;
    }
};