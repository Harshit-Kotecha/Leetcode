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
        int len = 0;
        while(t) {
            len++;
            t = t->next;
        } 
        k = k % len;
        if(k == 0)
            return head;
        t = head;
        for(int i = 0; i < len - k - 1; i++) {
            t = t->next;
        }
        ListNode* newHead = t->next;
        t->next = NULL;
        t = newHead;
        if(newHead == NULL)
            return newHead;
        while(t->next) 
            t = t->next;
        t->next = head;
        
        return newHead;
    }
};