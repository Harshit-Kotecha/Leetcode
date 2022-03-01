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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size/2; i++) {
                TreeNode* n1 = q.front(); q.pop();
                TreeNode* n2 = q.front(); q.pop();
                if(n1 == NULL && n2 == NULL)
                    continue;
                if(n1 == NULL || n2 == NULL)
                    return 0;
                if(n1->val != n2->val)
                    return 0;
                q.push(n1->left);
                q.push(n2->right);
                q.push(n1->right);
                q.push(n2->left);
            }
        }
        return 1;
        
        
    }
    
};