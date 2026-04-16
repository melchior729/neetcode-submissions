class Solution {
public:
/**

The problem relies on previously seen values, so use a set.
Sets also provide O(1) lookup so best choice here.

Declare a set that stores seen values.
Iterate through the list.
    If the current value is in the set, return true.
    Otherwise, insert the value into the set.
Return false as nothing was found

Time: O(N) as we iterate through N elements.
Space: O(N) as we reserve space for N elements in the set.

*/
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.contains(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};