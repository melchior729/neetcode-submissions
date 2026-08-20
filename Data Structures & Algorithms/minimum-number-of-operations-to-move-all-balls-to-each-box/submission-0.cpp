// starting: 1:56

class Solution {
   public:
    vector<int> minOperations(string boxes) {
        /*

        answer = []

        for i = 0, i < n, i++:
            operations = 0

            for j = 0, j < n, j++:
                if i != j && boxes[j]:
                    operations += abs(i -j)

            answer[i] = operations
        
        return answer

        finished reasoning & above pseudo code: 2:05
        */

        /*

        first submission: 2:07 wrong.
        auto n{static_cast<int>(boxes.size())};
        vector<int> answer(boxes.length());

        for (auto i{0}; i < n; ++i) {
            auto operations{0};

            for (auto j{0}; j < n; ++j) {
                if (i != j && boxes[j]) {
                    operations += abs(i - j);
                }
            }

            answer[i] = operations;
        }

        return answer;
        */

        auto n{static_cast<int>(boxes.size())};
        vector<int> answer(boxes.length());

        for (auto i{0}; i < n; ++i) {
            auto operations{0};

            for (auto j{0}; j < n; ++j) {
                if (i != j && boxes[j] == '1') {
                    operations += abs(i - j);
                }
            }

            answer[i] = operations;
        }

        return answer;
    }
};