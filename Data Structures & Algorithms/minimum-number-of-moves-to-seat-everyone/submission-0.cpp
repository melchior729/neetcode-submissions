class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        /*

        x           x   x               x
        ======================
        y   y   y           y


        se = [1, 4, 5, 9]
        st = [1, 2, 3, 6]

        moves = 0

        for i = 0, i < n, i++
            seat = seats[i]
            student = students[i]

            if (seat != student):
                moves += abs(seat - student)
        
        return moves

        reasoning finished at 10:01
        */

        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        auto moves{0};

        for(auto i{0}; i < seats.size(); ++i) {
            if (seats[i] != students[i]) {
                moves += abs(seats[i] - students[i]);
            }
        }

        return moves;
    }
};