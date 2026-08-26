class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        auto n{nums.size()};
        vector<int> prefix(n);

        prefix[0] = nums[0];
        for (auto i{1uz}; i < n; ++i) {
            prefix[i] = nums[i] + prefix[i - 1];
        }

        cout << endl;

        vector<int> suffix(n);

        suffix[n - 1] = nums[n - 1];
        for (auto i{n - 1}; i --> 0;) {
            suffix[i] = nums[i] + suffix[i + 1];
        }

        for (auto i{0uz}; i < n; ++i) {
            auto left{i > 0 ? prefix[i - 1] : 0};
            auto right{i < n - 1 ? suffix[i + 1] : 0};

            if (left == right) {
                return i;
            }
        }

        return -1;
    }
};