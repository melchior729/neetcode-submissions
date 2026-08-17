class Solution {
   public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> seen{};
        auto a{0};

        auto t{grid.size() * grid.size()};
        auto pi_prod{static_cast<int>((t * (t + 1)) / 2)};

        auto sum{0};
        for (const auto& r : grid) {
            for (const auto& v : r) {
                if (!seen.insert(v).second) {
                    a = v;
                    sum -= a;
                }

                sum += v;
            }
        }

        return {a, pi_prod - sum};
    }
};