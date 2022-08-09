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
        
        bool l = lca(root->left, p, q);
        bool r = lca(root->right, p, q);
        bool m = root == p || root == q;
        
        if(l + m + r >= 2) {
            rs = root;
            return 1;
        }
        return l + r + m;
    } 
};