class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        auto left{1}, right{*max_element(piles.begin(), piles.end())};
        auto answer{right};

        while (left <= right) {
            auto mid{left + (right - left) / 2};

            auto hours{0LL};
            for (const auto &p : piles) {
                hours += (p + mid - 1LL) / mid; 
            }

            if (hours <= h) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return answer;
    }
};
