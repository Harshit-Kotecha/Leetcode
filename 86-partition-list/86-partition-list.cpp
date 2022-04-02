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
    ListNode* partition(ListNode* head, int x) {
        ListNode *dmy = new ListNode(0), *N = new ListNode(0);
        ListNode *curr = dmy, *t = head, *nH = N;
        while(t) {
            if(t->val < x) {
                curr = curr->next = t;
            } else {
                nH = nH->next = t;
            }
            t = t->next;
        }
        
        curr->next = N->next;
        nH->next = NULL;
        return dmy->next;
    }
};