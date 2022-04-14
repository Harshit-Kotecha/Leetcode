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
        int s = -1, e = -1, sum = 0;
        while(t) {
            if(t->val == 0) {
                if(s != 0) s = 0;
                else if(e != 0) e = 0;
                if(s == 0 && e == 0) {
                    curr->next = new ListNode(sum);
                    curr = curr->next;
                    s = sum = 0;
                    e = -1;
                }
            } else {
                sum += t->val;
            }
            t = t->next;
        }
        return dmy->next;
    }
};