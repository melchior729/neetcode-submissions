class Solution {
   public:
    int numUniqueEmails(vector<string>& emails) {
        /*
        set of unique emails

        for email in emails
            local = ""
            domain = ""

            i = 0
            while email[i] != '@':
                if (email[i] == '+'):
                    break
                if (email[i] == '.'):
                    continue
                local += email[i]

            while (i < email.size()):
                domain += email[i]

            seen.insert(local + domain)

        return set.size()
        */

        unordered_set<string> stored{};

        for (const auto& email : emails) {
            auto local{""s};

            auto i{0uz};
            auto c{email[i]};
            
            while (c != '@') {
                if (c == '+') {
                    break;
                } else if (c == '.') {
                    i++;
                    c = email[i];
                    continue;
                }

                local += c;
                i++;
                c = email[i];
            }

            i = email.find('@') + 1;
            auto domain{email.substr(i, email.length() - i)};
            stored.insert(local + domain);
        }

        for (const auto & s : stored) {
            cout << s << " ";
        }

        return stored.size();

        // testemail@neetcode.com
        // testemail@nee.tcode.com
    }
};