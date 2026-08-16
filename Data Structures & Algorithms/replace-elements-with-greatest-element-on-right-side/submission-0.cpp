class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        auto largest{arr[arr.size() - 1]};
        arr[arr.size() - 1] = -1;

        for (auto i{arr.size() - 1}; i --> 0;) {
            auto t{arr[i]};
            arr[i] = largest;
            if (t > largest) {
                largest = t;
            } 
        }

        return arr;
    }
};