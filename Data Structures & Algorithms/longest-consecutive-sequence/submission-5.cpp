class Solution {
   public:

    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        auto sorted{nums};
        std::sort(sorted.begin(), sorted.end());

        auto longest{1};
        auto curr{1};
        for (auto i{0uz}; i < sorted.size(); ++i) {
            if (i == 0) {
                continue;
            }

            auto prev{sorted[i - 1]};
            auto now{sorted[i]};

            if (now == prev) {
                continue;
            } else if (now == prev + 1) {
                curr++;
                if (curr > longest) {
                    longest = curr;
                }
            } else {
                curr = 1;
            }
        }

        return longest;
    }
};
