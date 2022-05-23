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
        
        while(head && head->val == val) {
            head = head->next;
        }
        ListNode *t = new ListNode(0);
        t->next = head;
        while(t && t->next) {
            if(t->next->val == val) {
                t->next = t->next->next;
            }
            else
                t = t->next;
        }
        return head;
    }
};