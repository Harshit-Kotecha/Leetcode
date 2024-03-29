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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0)
            return head;
        
        ListNode *t = head;
        int len = 1;
        while(t->next) {
            t = t->next;
            len++;
        } cout<<len;
        k = k % len;
        if(k == 0)
            return head;
        t->next = head;
        t = head;
        for(int i = 0; i < len - k - 1; i++) {
            t = t->next;
        }
        // if(t->next == NULL) 
        //     return head;
        
        ListNode* newHead = t->next;
        t->next = NULL;
        
        return newHead;
    }
};