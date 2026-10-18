class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        auto greatest{arr[arr.size() - 1]};
        arr[arr.size() - 1] = -1;

        for (auto i{arr.size() - 1}; i --> 0;) {
            auto t{arr[i]};
            arr[i] = greatest;
            greatest = std::max(t, greatest);
        }       

        return arr;
    }
};