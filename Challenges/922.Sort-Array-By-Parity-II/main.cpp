#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& nums) {
		vector<int> sortedArray;
		queue<int> odd, even;
		for (auto& num : nums) {
			if (num % 2 == 0) even.push(num);
			else odd.push(num);
		}

		/* for (int i = 0; i < nums.size(); i++) { */
		/* 	if (i % 2 == 0) { */ 
		/* 		sortedArray.push_back(even.front()); */
		/* 		even.pop(); */
		/* 	} else { */
		/* 		sortedArray.push_back(odd.front()); */
		/* 		odd.pop(); */
		/* 	} */
		/* } */

		while (!even.empty() || !odd.empty()) {
			sortedArray.push_back(even.front());
			sortedArray.push_back(odd.front());
			even.pop();
			odd.pop();
		}
		return sortedArray;
	}
	void print(vector<int>& nums) {
		cout << "Numbers: ";
		for (auto& num : nums) cout << num << ", ";
		cout << endl;
	}
};

int main() {
	Solution solution;
	vector<int> nums1 = {4,2,5,7};

	solution.print(nums1);	
	auto nums1Sorted = solution.sortArrayByParityII(nums1);
	solution.print(nums1Sorted);
}

