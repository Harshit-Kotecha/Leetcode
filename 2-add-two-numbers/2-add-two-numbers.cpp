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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //l1 = rev(l1);
        //l2 = rev(l2);
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;
        while(l1 && l2) {
            l1->val += l2->val + carry;
            carry = l1->val / 10;
            l1->val %= 10;
            curr = curr->next = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1) {
            l1->val += carry;
            carry = l1->val / 10;
            l1->val %= 10;
            curr = curr->next = l1;
            l1 = l1->next;
        }
        while(l2) {
            l2->val += carry;
            carry = l2->val / 10;
            l2->val %= 10;
            curr = curr->next = l2;
            l2 = l2->next;
        }
        if(carry)
            curr->next = new ListNode(carry);
        
        return dummy->next;
         
        
    }
    ListNode* rev(ListNode* head) {
        ListNode *prev = NULL, *next;
        while(head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};