/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
   public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const Interval &a, const Interval &b){
            return a.start < b.start;
        });

        auto end{numeric_limits<int>::min()};
        for (const auto &interval : intervals) {
            if (interval.start < end) {
                return false;
            }
 
            end = interval.end;
        }

        return true;
    }
};
