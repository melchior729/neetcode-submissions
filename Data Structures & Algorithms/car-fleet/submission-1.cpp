class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        auto size{position.size()};
        vector<pair<int, float>> cars(size);

        for (auto i{0uz}; i < size; ++i) {
            cars[i] = {position[i], static_cast<float>(speed[i])};
        }

        sort(cars.rbegin(), cars.rend());
        auto longest_t{-1.0f};
        auto fleet_size{0};

        for (auto &[pos, speed] : cars) {
            auto t{(target - pos) / speed};
            if (longest_t == -1 || t > longest_t) {
                longest_t = t;
                fleet_size++;
            }
        }

        return fleet_size;
    }
};
