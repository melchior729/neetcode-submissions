class Solution {
public:
    int maxArea(vector<int>& heights) {
        auto max_area{0};

        auto left{0}, right{static_cast<int>(heights.size()) - 1};
        while (left < right) {
            auto area{min(heights[left], heights[right]) * (right - left)}; 
            max_area = max(max_area, area);

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        } 

        return max_area;
    }
};
