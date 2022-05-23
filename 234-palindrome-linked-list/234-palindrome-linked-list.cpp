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
        int len = 0;
        ListNode *slow = head, *fast = head, *t = head, *p = head;
        while(t) {
            len++;
            t = t->next;
        }
        if(len == 1) return 1;
        while(fast && fast->next) {
            p = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        p->next = NULL;
        if(len & 1) slow = slow->next;
        slow = rev(slow);
        while(head && slow) {
            if(head->val != slow->val) return 0;
            
            head = head->next;
            slow = slow->next;
            
        }
        if(head || slow) return 0;
        return 1;
    }
    ListNode* rev(ListNode* h) {
        ListNode *p = NULL, *n;
        while(h) {
            n = h->next;
            h->next = p;
            p = h;
            h = n;
        }
        return p;
    }
};