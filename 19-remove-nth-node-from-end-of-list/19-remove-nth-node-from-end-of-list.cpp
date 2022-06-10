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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto *slow = head, *fast = head;
        
        for(int i = 0; i < n && slow; i++) slow = slow->next;
        
        if(slow == NULL) return head->next;
        //if(slow == head) return head->next;
        
        while(slow->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        fast->next = fast->next->next;
        return head;
    }
};