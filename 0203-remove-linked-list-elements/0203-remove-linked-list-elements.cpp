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
        ListNode *dmy = new ListNode(-1), *cur = dmy;
        while(head) {
            if(head->val != val) {
                cur->next = head;
                cur = cur->next;
            }
            head = head->next;
        }
        cur->next = NULL;
        return dmy->next;
    }
};