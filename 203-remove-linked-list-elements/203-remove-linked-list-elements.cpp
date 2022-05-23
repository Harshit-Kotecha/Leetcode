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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *nH = new ListNode(0), *t = nH;
        while(head) {
            if(head->val != val) {
                t = t->next = head;
            }
            head = head->next;
        }
        t->next = NULL;
        return nH->next;
    }
};