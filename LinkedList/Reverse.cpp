#include <stack> 
#include <iostream>
using namespace std;
struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> s;
        ListNode* curr = head;
        while (curr)
        {
            s.push(curr->val);
            curr = curr->next;
        }
        while (head)
        {
            int res = s.top();
            s.pop();
            if (res != head->val)
                return false;
            head = head->next;
        }
        return true;
    }
};

int main()
{
    ListNode* node_1 = new ListNode();
    ListNode* node_2 = new ListNode();
    ListNode* node_3 = new ListNode();
    ListNode* node_4 = new ListNode();
    node_1->val = 1;
    node_2->val = 3;
    node_3->val = 2;
    node_4->val = 1;
    node_1->next = node_2;
    node_2->next = node_3;
    node_3->next = node_4;
    Solution s = Solution();
    cout << s.isPalindrome(node_1);
	return 0;
}