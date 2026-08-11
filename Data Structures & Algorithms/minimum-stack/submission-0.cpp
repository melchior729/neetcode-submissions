class MinStack {
    stack<int> vals{};
    stack<int> mins{};

   public:
    MinStack() {}

    void push(int val) {
        vals.push(val);
        if (mins.empty() || val <= mins.top()) {
            mins.push(val);
        }
    }

    void pop() {
        auto val{vals.top()};
        if (!mins.empty() && val == mins.top()) {
            mins.pop();
        }

        vals.pop();
    }

    int top() {
        return vals.top();
    }

    int getMin() {
        return mins.top();
    }
};
