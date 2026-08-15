class Solution {
public:
    int trap(vector<int>& heights) {
        int trapped{0};

        auto left{0}, right{static_cast<int>(heights.size() - 1)};
        auto lm{heights[left]}, rm{heights[right]};

        while (left < right) {
            if (lm < rm) {
                left++;
                lm = max(lm, heights[left]);
                trapped += lm - heights[left];
            } else {
                right--;
                rm = max(rm, heights[right]);
                trapped += rm - heights[right];
            }
        }

        return trapped;
    }
};
