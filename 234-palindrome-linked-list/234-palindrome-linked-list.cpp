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
        ListNode *slow = head, *fast = head, *t = head, *p = NULL, *h;
        
        while(fast && fast->next) {
            fast = fast->next->next;
            h = slow;
            slow = slow->next;
            h->next = p;
            p = h;
        }
        if(fast) slow = slow->next;
        while(slow != NULL) {
            if(h->val != slow->val) 
                return 0;
            
            h = h->next;
            slow = slow->next;
            
        }
        return 1;
    }
    
};