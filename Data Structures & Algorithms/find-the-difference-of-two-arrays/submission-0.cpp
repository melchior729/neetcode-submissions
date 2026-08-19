class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1{nums1.begin(), nums1.end()}; 
        unordered_set<int> set2{nums2.begin(), nums2.end()}; 
        vector<vector<int>> res(2);

        for (const auto &n : set1) {
            if (!set2.contains(n)) {
                res[0].push_back(n);
            }
        }

        for (const auto &n : set2) {
            if (!set1.contains(n)) {
                res[1].push_back(n);
            }
        }

        return res;
    }
};