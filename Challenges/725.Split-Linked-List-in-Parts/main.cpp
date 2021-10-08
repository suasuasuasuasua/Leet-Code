#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	~ListNode() {
		cout << "deleting: " << this->val << endl;
	}
};

class Solution {
public:
	vector<ListNode*> splitListToParts(ListNode* head, int k) {
		vector<ListNode*> splitList;
		while (head->next != ZZ)
		return splitList;
	}
	void print(ListNode* head) {
		cout << "val: ";
		while (head != nullptr) {
			cout << head->val << " ";
			head = head->next;
		}
		cout << endl;
	}
	void clean(ListNode* head) {
		while (head != nullptr) {
			auto temp = head;
			head = head->next;
			delete temp;
		}
	}
};

int main() {
	Solution solution;
	ListNode* head = new ListNode(1, 
			new ListNode(2, 
				new ListNode(3, 
					new ListNode(4, 
						new ListNode(5, 
							new ListNode(6, 
								new ListNode(7, 
									new ListNode(8, 
										new ListNode(9, 
											new ListNode(10))))))))));
	solution.print(head);
	auto splitList = solution.splitListToParts(head, 3);
	solution.clean(head);
}
