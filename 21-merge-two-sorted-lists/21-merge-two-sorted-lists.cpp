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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *nh = new ListNode(0), *t = nh;
        while(list1 && list2) {
            if(list1->val < list2->val) {
                t = t->next = list1;
                list1 = list1->next;
            } else {
                t = t->next = list2;
                list2 = list2->next;
            }
        }
        t->next = list1 != NULL ? list1 : list2;
        return nh->next;
    }
};