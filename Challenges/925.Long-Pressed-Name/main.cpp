#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if ( name == typed ) return true;
        queue<char> qName, qTyped;
        char lastLetter;

        for (auto& c: name) qName.push(c);
        for (auto& c: typed) qTyped.push(c);

        cout << name << " " << typed << endl;
        while (!qName.empty() && !qTyped.empty()) {
            cout << qName.front() << " " << qTyped.front() << endl;
            if (qName.front() == qTyped.front()) {
                lastLetter = qName.front();
                qName.pop();
            }
            qTyped.pop();
        }

        if (qName.empty() && !qTyped.empty() && lastLetter == qTyped.front()) return true;
        if (qName.empty() && !qTyped.empty()) return false;
        if (qName.empty()) return true;
        return false;
    }
};
int main() {
    Solution solution;
    /* cout << solution.isLongPressedName("alex", "aaleex") << endl; */
    /* cout << solution.isLongPressedName("saeed", "ssaaedd") << endl; */
    /* cout << solution.isLongPressedName("alex", "aaleexa") << endl; */
    /* cout << solution.isLongPressedName("vtkgn", "vttkgnn") << endl; */
    cout << solution.isLongPressedName("alex", "aaleelx") << endl;
}
