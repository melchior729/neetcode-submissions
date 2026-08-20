class Solution {
   public:
    void sortColors(vector<int>& nums) {
        array<int, 3> colors = {};

        for (const auto& n : nums) {
            colors[n]++;
        }

        for (auto i{0uz}, k{0uz}; i < 3; ++i) {
            auto times{colors[i]};

            for (auto j{0}; j < times; ++j) {
                nums[k] = i;
                k++;
            }
        }
    }
};