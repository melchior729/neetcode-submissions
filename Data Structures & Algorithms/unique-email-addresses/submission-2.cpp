class Solution {
   public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> stored{};

        for (const auto& email : emails) {
            auto local{""s};

            auto i{0uz};
            auto c{email[i]};

            // local    
            while (c != '@') {
                if (c == '+') {
                    break;
                } 
 
                else if (c == '.') {
                    i++;
                    c = email[i];
                    continue;
                }

                local += c;
                i++;
                c = email[i];
            }

            if (c != '@') {
                i = email.find('@');
            }

            ++i;
            stored.insert(local + (email.substr(i, email.length() - i)));
        }

        return stored.size();
    }
};