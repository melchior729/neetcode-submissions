class Solution {
    long long nChooseK(int n, int k) {
        if (k < 0 || k > n) return 0;
        if (k == 0 || k == n) return 1;

        k = min(k, n - k);
        long long res = 1;

        for (int i = 0; i < k; ++i) {
            res *= (n - i);
            res /= (i + 1);
        }

        return res;
    }

   public:
    vector<int> getRow(int rowIndex) {
        vector<int> res{};
        auto a{rowIndex};

        for (auto b{0}; b <= rowIndex; ++b) {
            res.push_back(nChooseK(a, b));
        }

        return res;
    }
};