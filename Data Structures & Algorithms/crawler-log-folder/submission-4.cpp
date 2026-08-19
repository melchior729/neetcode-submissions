class Solution {
   public:
    int minOperations(vector<string>& logs) {
        auto steps{0};

        for (const auto& log : logs) {
            if (log == "../") {
                if (steps > 0) {
                    steps--;
                }
            } 
            
            else if (log != "./") {
                steps++;
            }
        }

        return steps;
    }
};