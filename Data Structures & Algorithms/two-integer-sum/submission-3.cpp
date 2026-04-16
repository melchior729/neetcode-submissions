class Solution {
public:
/**

The problem wants us to return the indices of the 2 elements that add to target. Since we need to look at previous values,
and store indices for those values, use a map from value -> index.

Declare a map of value -> index.
Iterate through the list.
    Since num + diff = target, diff = target - num.
    If the diff is already in the map, get the index of that and return with the current index. Diff index < curr index since it was found first.
    Otherwise, just add the entry, value -> index to the map. 
Return an empty vector if no solution.

Time: O(N): as we must iterate through N elements.
Space: O(N): as we must store N elements in the map.

*/
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int diff = target - num;
            if (indices.contains(diff)) {
                return {indices[diff], i};
            }
            indices[num] = i;
        }

        return {};
    }
};
