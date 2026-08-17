class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        auto prod{static_cast<int>(nums.size() * (nums.size() + 1) / 2)};
        auto a{0};
        auto sum{0};

        unordered_set<int> seen{};
        for (const auto &num : nums) {
            if (seen.contains(num)) {
                a = num;
                sum -= num;
            }
            
            sum += num;
            seen.insert(num);
        }

        return {a, prod - sum};
    }
};