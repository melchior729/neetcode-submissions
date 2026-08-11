class MinStack {
    vector<int> vals{};
    vector<int> mins{};

   public:
    MinStack() {}

    void push(int val) {
        if (mins.empty() || val <= mins.back()) {
            mins.push_back(val);
        }

        vals.push_back(val);
    }

    void pop() {
        if (vals.empty()) {
            return;
        }

        if (!mins.empty() && mins.back() == vals.back()) {
            mins.pop_back();
        }

        vals.pop_back();
    }

    int top() {
        if (vals.empty()) {
            return -1;
        }

        return vals.back();
    }

    int getMin() {
        if (mins.empty()) {
            return -1;
        }

        return mins.back();
    }
};
