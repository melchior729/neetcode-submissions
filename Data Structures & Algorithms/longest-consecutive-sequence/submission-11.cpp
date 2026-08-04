class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        auto longest{0};

        for (const auto &n : nums) {
            if (!seen.contains(n - 1)) {
                auto length{0};
                while (seen.contains(n + length)) {
                    length++;
                }

                if (length > longest) {
                    longest = length;
                }
            }
        }

        return longest;
    }
};
