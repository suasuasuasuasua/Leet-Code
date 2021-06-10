/*
 * Given an array of integers and a target number, return the indicies of the two numbers that would add up to the target
 *
 * Runtime: 1240ms
 * Memory : 10MB
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  
public:
    vector <int> twoSum( vector<int>& nums, int target ) {
   vector<int> solution; 

        for (int i = 0; i < nums.size(); i++) {

            for (int j = 1; j < nums.size(); j++) {
                // cout << nums.at(i) << " " << nums.at(j) << endl;
                if ( !(i == j) && (nums.at(i) + nums.at(j) == target ) ) {
          
                    solution.push_back(i);
                    solution.push_back(j);

                    return solution;
                }
            }
        }
        solution.push_back(-1);
        solution.push_back(-1);
        return solution;
    }

};

int main() {
  
    Solution solution;
    vector<int> numsList = {2, 7, 11, 15};
    vector<int> solutionList;

    solutionList = solution.twoSum( numsList , 9 );

    for (int i = 0; i < solutionList.size(); i++) {
        cout << solutionList.at(i) << endl;
    }

    return 0;
}
