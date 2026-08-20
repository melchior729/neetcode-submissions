class Solution {
   public:
    bool lemonadeChange(vector<int>& bills) {
        auto fives{0};
        auto tens{0};

        for (const auto& bill : bills) {
            if (bill == 20) {
                if (tens > 0 && fives > 0) {
                    tens--;
                    fives--;
                } else if (fives > 2) {
                    fives -= 3;
                } else {
                    return false;
                }
            }

            else if (bill == 10) {
                if (fives > 0) {
                    fives--;
                    tens++;
                    continue;
                } else {
                    return false;
                }
            }

            else {
                fives++;
            }
        }

        return true;
    }
};