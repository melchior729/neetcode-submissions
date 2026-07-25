class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // we can store an vector of vectors
        // i is the # of occurences of that one
        // so if a number shows up like 5 times, its in index 4.
        // we can just make this by going through the list. 

        // after that, if we want the top "k".
        // walk back from the top of this vector.
        // if k < # elements of top slot, return them.
        // if k > # elemnts of top slot, we need to walk down into the second most, and so forth.
        // put thos eleements in a vecotr and return that one.

        unordered_map<int, int> occurences{};
        vector<vector<int>> frequencies(nums.size() + 1);
        
        for (const auto &num : nums) {
            occurences[num]++;
        }

        for (const auto &[key, v] : occurences) {
            frequencies[v].push_back(key);
        }

        vector<int> ret{};
        for (auto i{frequencies.rbegin()}; i != frequencies.rend(); ++i) {
            auto bucket{*i};
            for (auto j{bucket.rbegin()}; j != bucket.rend(); ++j) {
                auto v{*j};
                ret.push_back(v);
                if (ret.size() == k) {
                    return ret;
                } 
            }
        }


        return ret;
    }
};
