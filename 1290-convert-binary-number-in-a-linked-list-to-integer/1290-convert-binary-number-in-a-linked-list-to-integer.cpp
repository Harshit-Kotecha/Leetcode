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
    int getDecimalValue(ListNode* head) {
        if(head == NULL) return 0;
        ListNode* t = head;
        int n = 0;
        while(head) {
            n++;
            head = head->next;
        }
        int res = 0;
        while(t) {
            n--;
            if(t->val)
                res += pow(2, n);
            t = t->next;
        }
        return res;
    }
};