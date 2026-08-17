class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        auto size{static_cast<int>(nums.size())};
        if (size == 1) {
            return true;
        }  

        auto left{0}, right{1};

        while (right < size) {
            auto lv{nums[left]};
            auto rv{nums[right]};

            if (!((lv % 2 == 0 && rv % 2 == 1) || (lv % 2 == 1 && rv % 2 == 0))) {
                return false;
            }

            left++;
            right++;
        }

        return true;
    }
};