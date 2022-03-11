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
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *t = head, *prev;
        int len = 0;
        while(t) {
            len++;
            t = t->next;
        } 
        k = k % len;
       
        for(int i = 0; i < k; i++) {
            t = head;
            while(t->next) {
                prev = t;
                t = t->next;
            }
            t->next = head;
            head = t;
            prev->next = NULL;
        }
        
        return head;
    }
};