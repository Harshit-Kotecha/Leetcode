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
        queue<TreeNode*> qu;
        qu.push(p), qu.push(q);
        while(!qu.empty()) {
            int size = qu.size();
            for(int i = 0; i < size/2; i++) {
                TreeNode* n1 = qu.front(); qu.pop();
                TreeNode* n2 = qu.front(); qu.pop();
                if(n1 == NULL && n2 == NULL)
                    continue;
                if(n1 == NULL || n2 == NULL) {
                    return 0;
                }
                if(n1->val != n2->val)
                    return 0;
                qu.push(n1->left);
                qu.push(n2->left);
                qu.push(n1->right);
                qu.push(n2->right);
            }            
        }
        return 1;
    }
};