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
    vector<int> nextLargerNodes(ListNode* head) {
        head = rev(head);
        vector<int> res;
        stack<int> st;

        while(head) {
            while(!st.empty() && head->val >= st.top()) {
                st.pop();
            }
            if(!st.empty()) {
                res.push_back(st.top());
            } else {
                res.push_back(0);
            }
            st.push(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    ListNode* rev(ListNode* t) {
        ListNode *p = NULL, *n;
        while(t) {
            n = t->next;
            t->next = p;
            p = t;
            t = n;
        }
        return p;
    }
};