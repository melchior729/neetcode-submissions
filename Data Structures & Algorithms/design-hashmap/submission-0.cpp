class MyHashMap {
    unordered_map<int, int> m{};

public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        m[key] = value;
    }
    
    int get(int key) {
        if (m.contains(key)) {
            return m[key];
        }    

        return -1;
    }
    
    void remove(int key) {
       m.erase(key); 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */