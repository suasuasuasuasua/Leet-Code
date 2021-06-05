#include <iostream>
#include <cmath>

using namespace std;


class Solution {
public:
    int reverse(int x) {
        
        int num = x;
        int lenNum = 0;
        
        do {
            
            x = x / 10;
            lenNum += 1;

            if (x == 0) {
                break;
            }

        } while (true);

        for (int i = 0; i < lenNum; i++) {
            int divisor = pow(10, i);
            cout << divisor << endl;
            cout << num % divisor << endl;
        }

        return lenNum;
        
    }
};

int main () {

    Solution reverse;

    int num = 123;

    int solution = reverse.reverse( num );

    // cout << solution << endl;
    

}