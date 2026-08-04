class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end()); 
        auto longest{0};

        for (const auto &n : nums) {
            if (!set.contains(n - 1)) {
                auto length{0};
                while (set.contains(n + length)) {
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
