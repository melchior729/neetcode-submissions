class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto n{static_cast<int>(digits.size())};
        auto i{n - 1};

        for (; i >= 0; i--) {
            if (digits[i] != 9) {
                digits[i]++;
                break;
            }

            digits[i] = 0;
        }

        if (i == -1) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
