class Solution {
   public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> stored{};

        for (const auto& email : emails) {
            auto at{email.find('@')};
            auto plus{email.find('+')};
            auto local_end{min(at, plus)};

            auto local{email.substr(0, local_end)};
            erase(local, '.');

            ++at; 
            stored.insert(local + email.substr(at, email.size() - at));
        }

        return stored.size();
    }
};