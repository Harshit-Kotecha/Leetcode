/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *slow = head, *fast = head, *pre;
        while(fast && fast->next) {
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        pre->next = NULL;
        ListNode *n, *p = NULL;
        while(slow) {
            n = slow->next;
            slow->next = p;
            p = slow;
            slow = n;
        }
        int res = INT_MIN;
        while(head && p) {
            res = max(res, head->val + p->val);
            head = head->next;
            p = p->next;
        }
        return res;
    }
};