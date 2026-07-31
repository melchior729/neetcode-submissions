class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // array of array which at index i contains elements with i occurences
        // max size of this array is length of nums

        auto size{nums.size()};
        std::vector<std::vector<int>> buckets(size);

        // map that builds the # of occurences.
        // key is the num
        // val is its occurennce/idnex

        unordered_map<int, int> indices{};
        for (const auto &n : nums) {
            indices[n]++;
        }

        // writing the map to the array 

        for (const auto &[k, v] : indices) {
            buckets[v - 1].push_back(k);
        }

        // now we have to walk backward through it
        // go from the rbegin() to rend() for buckets
        // then for the inner loop, until the size == k

        vector<int> ret{};
        for (auto it{buckets.rbegin()}; it != buckets.rend(); ++it) {
            for (auto jt{it->rbegin()}; jt != it->rend(); ++jt) {
                ret.push_back(*jt);

                if (ret.size() == k) {
                    return ret;
                }
            }
        }

        return ret;
    }
};
