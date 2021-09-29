#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> emailList;
        string fullEmail, local, domain;

        for (string& email : emails) {
            int atSign = email.find('@');

            local = email.substr(0, atSign);
            domain = email.substr(atSign + 1);

            int plus = local.find('+');
            local = local.substr(0,plus);
            int dot = local.find('.');

            while (dot != string::npos) {
                local = local.substr(0, dot) + local.substr(dot + 1);
                dot = local.find('.', dot + 1);
            }
            fullEmail = local + "@" + domain;
            emailList.insert(fullEmail);
        }
        int count = emailList.size();
        return count;
    }
    void printEmails(vector<string>& emails) {
        cout << "Emails: ";
        for (auto& email : emails) cout << email << ", ";
        cout << endl;
    }
};

int main() {
    Solution solution;
    vector<string>emails1 = {"test.email+alex@leetcode.com","test.email.leet+alex@code.com"};
    vector<string>emails2 = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};

    solution.printEmails(emails1);
    cout << "Unique Emails: " << solution.numUniqueEmails(emails1) << endl << endl;
    solution.printEmails(emails2);
    cout << "Unique Emails: " << solution.numUniqueEmails(emails2) << endl << endl;

    return 0;
}
