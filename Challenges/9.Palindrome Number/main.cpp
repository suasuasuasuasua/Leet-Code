/*
 * Given an integer x, return true if x is a palindrome integer
 *
 * A palindrome integer is defined as a number that is the same read forward and backward
 *
 * For example: 121
 *
 * Runtime: 36ms, faster than 6.30%
 * Memory : 9.5MB, less than 6.82%
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
    bool isPalindrome(int x) {
       vector<int> numVec;
       int pop, lenNum;

       if (x < 0) {
           return false;
       }
       while (x != 0) {
           pop = x % 10;
           numVec.push_back(pop);
           x /= 10;
       }
       for (int i = 0; i < numVec.size(); i++) {
           if (numVec.at(i) != numVec.at(numVec.size() - 1 - i)) {
               return false;
           } 
       }
       return true;
    }
};

int main() {

    Solution palindrome;
    int exampleNum = 123;

    cout << palindrome.isPalindrome(exampleNum) << endl;

    return 0;
}
