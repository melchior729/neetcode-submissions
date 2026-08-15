class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        auto size{speed.size()};
        vector<pair<int, int>> cars(size);
        auto fleets{0};

        for (auto i{0uz}; i < size; ++i) {
            cars[i] = {position[i], speed[i]};
        }

        sort(cars.rbegin(), cars.rend());
        auto longest_t{-1.0f};
        float target_f{static_cast<float>(target)};

        for (const auto &car : cars) {
            auto t{(target_f - car.first) / car.second};
            if (longest_t == -1 || t > longest_t) {
                longest_t = t;
                fleets++;
            }
        }

        return fleets;
    }
};
