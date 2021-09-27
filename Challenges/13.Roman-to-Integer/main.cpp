/*
 * Given a string of roman numerals, return the integer value
 *
 * Runtime: 4ms faster than 91.66%
 * Memory : 5.9MB less than 93.63% 
 */

#include <iostream>

using namespace std;

class Solution {

public:
    int romanToInt(string S) {
        int I = 1;
        int V = 5;
        int X = 10;
        int L = 50;
        int C = 100;
        int D = 500;
        int M = 1000;

        int sum = 0;

        for (int i = 0; i < S.size(); i++) {
            
            if (S.at(i) == 'I') {
                if (i < S.size() - 1) {
                    if (S.at(i+1) == 'V') {
                        sum -= I;
                        sum += V;
                        i++;
                        continue;
                }
                    if (S.at(i+1) == 'X') {
                        sum -= I;
                        sum += X;
                        i++;
                        continue;
                    }
                }
                sum += I;
                continue;
            }
            if (S.at(i) == 'V') {
                sum += V;
                continue;
            }
            if (S.at(i) == 'X') {
                if (i < S.size() - 1) {
                    if (S.at(i+1) == 'L') {
                        sum -= X;
                        sum += L;
                        i++;
                        continue;
                }
                    if (S.at(i+1) == 'C') {
                        sum -= X;
                        sum += C;
                        i++;
                        continue;
                    }
                }   
                sum += X;
                continue;
            }
            if (S.at(i) == 'L') {
                sum += L;
                continue;
            }
            if (S.at(i) == 'C') {
                if (i < S.size() - 1) {
                    if (S.at(i+1) == 'D') {
                        sum -= C;
                        sum += D;
                        i++;
                        continue;
                    }
                    if (S.at(i+1) == 'M') {
                        sum -= C;
                        sum += M;
                        i++;
                        continue;
                    }
                }
                sum += C; 
                continue;
            }
            if (S.at(i) == 'D') {
                sum += D;
                continue;
            }
            if (S.at(i) == 'M') {
                sum += M;
                continue;
            }

        }

    return sum; 
    }
};
int main() {

    Solution roman;

    cout << roman.romanToInt("IX") << endl;
    return 0;

}
