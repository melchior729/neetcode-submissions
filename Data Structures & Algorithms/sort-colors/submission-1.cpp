class Solution {
   public:
    void sortColors(vector<int>& nums) {
        array<int, 3> colors = {};

        for (const auto& n : nums) {
            colors[n]++;
        }

        for (auto i{0uz}, k{0uz}; i < 3; ++i) {
            for (auto j{0}; j < colors[i]; ++j) {
                nums[k++] = i;
            }
        }
    }
};