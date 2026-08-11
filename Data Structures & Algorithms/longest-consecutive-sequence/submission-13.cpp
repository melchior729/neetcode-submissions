class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen{nums.begin(), nums.end()};
        auto longest{0};

        for (const auto &n : nums) {
            if (!seen.contains(n - 1)) {
                auto len{0};
                while (seen.contains(n + len)) {
                    len++;
                }

                if (len > longest) {
                    longest = len;
                }
            }
        } 

        return longest;
    }
};
