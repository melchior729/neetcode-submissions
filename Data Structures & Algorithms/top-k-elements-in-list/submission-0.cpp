class Solution {
public:
/**

The problem relies on the frequency of the elements, so we will use a map to track the count. We will then sort it from
largest count to least, and then return the top K values.

Declare a map of num -> count.
Iterate through the list.
    map[num]++, for all in the list.
Transfer the content of the map to a vector of pairs.
Sort the vector by the count, descending.
Make a new vector of size K.
Iterate through the sorted vector, from 0 to K.
    Add the count to the K sized vector.
Return the K sized vector.

Time: O(NlogN) since we must sort the content of the map.
Space: O(N) since we are making a vector and map of N elements.

*/
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;

        for (int num : nums) {
            counts[num]++;
        } 

        vector<pair<int, int>> pairs(counts.begin(), counts.end());

        sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> sorted;

        for (int i = 0; i < k; i++) {
            sorted.push_back(pairs[i].first);
        } 

        return sorted;
    }
};
