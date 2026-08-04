class LRUCache {
    unordered_map<int, list<pair<int, int>>::iterator> cache;
    list<pair<int, int>> order{};
    int capacity;

   public:
    LRUCache(int capacity) : cache(capacity), capacity(capacity) {}

    int get(int key) {
        if (!cache.contains(key)) {
            return -1;
        }

        auto it{cache[key]};
        order.splice(order.end(), order, it);
        return it->second;
    }

    void put(int key, int value) {
        if (cache.contains(key)) {
            auto it{cache[key]};
            it->second = value;
            order.splice(order.end(), order, it);
            return;
        }

        if (cache.size() == capacity) {
            auto front{order.front()};
            order.pop_front();
            cache.erase(front.first);
        }

        order.push_back({key, value});
        cache[key] = prev(order.end());
    }
};
