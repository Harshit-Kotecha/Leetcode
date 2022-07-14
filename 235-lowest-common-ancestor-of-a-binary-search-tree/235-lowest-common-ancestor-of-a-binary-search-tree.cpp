/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *rs = NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        lca(root, p, q);
        return rs;
    }
    bool lca(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || rs != NULL) return 0;
        
        bool left = 0, right = 0;
        if(p->val < root->val || q->val < root->val) {
            left = lca(root->left, p, q);
        } 
        if(p->val > root->val || q->val > root->val) {
            right = lca(root->right, p, q);
        }
        bool mid = root == p || root == q ? 1 : 0;
        
        if(left + right + mid >= 2) {
            rs = root;
            return 1;
        }
        return left || right || mid;
    }
};