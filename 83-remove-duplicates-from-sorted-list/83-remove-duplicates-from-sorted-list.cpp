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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* dummy = new ListNode(-1);
        ListNode *curr = dummy;
        while(head && head->next) {
            if(head->val != head->next->val) {
                curr = curr->next = head;
            }
            head = head->next;
            
        }
        curr = curr->next = head;
        curr->next = NULL;
        return dummy->next;
    }
};