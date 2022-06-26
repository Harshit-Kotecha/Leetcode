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
    void reorderList(ListNode* head) {
        ListNode *s = head, *f = head, *p = head;
        while(f && f->next) {
            p = s;
            s = s->next;
            f = f->next->next;
        }
        p->next = NULL;
        f = rev(s); 
        s = head;

        ListNode *dh = new ListNode(-1), *c = dh;
        while(s && f) {
            c = c->next = s;
            s = s->next;
            c = c->next = f;
            f = f->next;
        }
        if(s) c = c->next = s;
        if(f) c = c->next = f;
        c->next = NULL;
        head = dh;
        //prev->next = f;
    }
    ListNode* rev(ListNode* f) {
        ListNode *n, *p = NULL;
        while(f) {
            n = f->next;
            f->next = p;
            p = f;
            f = n;
        }
        return p;
    }
};