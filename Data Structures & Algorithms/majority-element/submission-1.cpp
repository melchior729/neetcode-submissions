class Solution {
public:
    int majorityElement(vector<int>& nums) {
        auto candidate{0}, count{0};

        for (const auto &n : nums) {
            if (count == 0) {
                candidate = n;
            }

            count += (n == candidate) ? 1 : -1;
        }

        return candidate;
    }
};