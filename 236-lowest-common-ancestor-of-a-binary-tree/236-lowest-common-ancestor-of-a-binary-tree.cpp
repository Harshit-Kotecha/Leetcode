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
    TreeNode* rs = NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        lca(root, p, q);
        return rs;
    }
    bool lca(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return 0;
        
        bool left = lca(root->left, p, q);
        bool right = lca(root->right, p, q);
        
        if(rs != NULL) return 1;
        
        if(left || right) {
            if(root == p || root == q) {
                rs = root;
                return 1;
            }
        }
        if(left && right) {
            rs = root;
            return 1;
        }
        if(root == p || root == q) {
            return 1;
        }
        return left == NULL ? right : left;
    }
};