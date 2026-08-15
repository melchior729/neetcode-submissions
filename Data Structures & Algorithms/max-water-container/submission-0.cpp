class Solution {
public:
    int maxArea(vector<int>& heights) {
        auto max_area{0};

        auto left{0}, right{static_cast<int>(heights.size()) - 1}; 
        while (left < right) {
            auto lh{heights[left]}, rh{heights[right]};
            auto area{min(lh, rh) * (right - left)};
            max_area = max(max_area, area);

            if (lh >= rh) {
                right--;
            } else {
                left++;
            }
        }

        return max_area;
    }
};
