class Solution {
   public:
    int arraySign(vector<int>& nums) {
        auto prod{1LL};
        for (auto n : nums) {
            cout << prod << " * " << n << " = ";
            prod *= n;
            cout << prod << endl;
        }

        cout << prod;

        if (prod == 0) {
            return 0;
        } else if (prod < 0) {
            return -1;
        } else {
            return 1;
        }
    }
};