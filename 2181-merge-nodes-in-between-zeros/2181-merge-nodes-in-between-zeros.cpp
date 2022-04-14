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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dmy = new ListNode(-1);
        ListNode *curr = dmy, *t = head;
        int s = -1, e = -1;
        head = NULL;
        while(t) {
            if(t->val == 0) {
                if(s != 0) s = 0;
                else if(e != 0) e = 0;
                if(s == 0 && e == 0) {
                    curr->next = head;
                    curr = curr->next;
                    head = NULL;
                    s = 0;
                    e = -1;
                }
            } else {
                if(head) head->val += t->val;
                else head = t;
                //sum += t->val;
            }
            t = t->next;
        }
        curr->next = NULL;
        return dmy->next;
    }
};