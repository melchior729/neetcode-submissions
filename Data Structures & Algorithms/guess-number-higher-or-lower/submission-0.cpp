/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        auto left{1}, right{n};

        while (left <= right) {
            auto mid{(left + right) / 2};
            auto response{guess(mid)};

            if (response == 0) {
                return mid;
            }

            else if (response > 0) {
                left = mid + 1;
            }

            else if (response < 0) {
                right = mid - 1;
            }
        }

        return -1;
    }
};