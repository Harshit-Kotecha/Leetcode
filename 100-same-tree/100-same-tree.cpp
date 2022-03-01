/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL)
            return p == q;
        if(p->val != q->val)
            return 0;
        
        queue<TreeNode*> q1, q2;
        q1.push(p), q2.push(q);
        while(!q1.empty()) {
            int s1 = q1.size(), s2 = q2.size();
            if(s1 != s2)
                return 0;
            for(int i = 0; i < s1; i++) {
                TreeNode *n1 = q1.front(), *n2 = q2.front();
                q1.pop(), q2.pop();
                if(n1 == NULL || n2 == NULL) {
                    if(n1 != n2)
                        return 0;
                    else
                        continue;
                }
                if(n1->val != n2->val)
                    return 0;
                q1.push(n1->left);
                q2.push(n2->left);
                q1.push(n1->right);
                q2.push(n2->right);
            }
        }
        return 1;
    }
};