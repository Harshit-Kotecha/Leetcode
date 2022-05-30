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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast =head, *p = head;
        while(fast && fast->next) {
            p = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        p->next = NULL;
        if(fast) slow = slow->next;
        ListNode *n, *t = NULL;
        while(slow) {
            n = slow->next;
            slow->next = t;
            t = slow;
            slow = n;
        }
        while(head && t) {
            if(head->val != t->val) return 0;
            head = head->next;
            t = t->next;
        }
        return 1;
    }
};