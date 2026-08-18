class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> one{nums1.begin(), nums1.end()}; 
        unordered_set<int> two{nums2.begin(), nums2.end()}; 
        unordered_set<int> intersect{};

        for (const auto &n : one) {
            if (two.contains(n)) {
                intersect.insert(n);
            }
        }

        for (const auto &n : two) {
            if (one.contains(n)) {
                intersect.insert(n);
            }
        }

        vector<int> res{};
        for (const auto &n : intersect) {
            res.push_back(n);
        }

        return res;
    }
};