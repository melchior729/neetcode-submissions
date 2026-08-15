class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto left{0}, right{static_cast<int>(numbers.size()) - 1};

        while (left < right) {
            auto sum{numbers[left] + numbers[right]};
            if (sum > target) {
                right--;
            } else if (sum < target) {
                left++;
            } else {
                break;
            }
        }

        return {++left, ++right};
    }
};
