class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2);

        for (const auto &student : students) {
            count[student]++;
        } 

        auto res{students.size()};
        for (const auto &sandwich : sandwiches) {
            if (count[sandwich] > 0) {
                count[sandwich]--;
                res--;
            } else {
                break;
            }
        }

        return res;
    }
};