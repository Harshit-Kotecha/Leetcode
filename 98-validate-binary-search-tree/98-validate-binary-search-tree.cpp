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
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return 1;
        
        // 0 for left, 1 for right
        if(check(root->left, root->val, 0) && check(root->right, root->val, 1)) {
            return isValidBST(root->left) && isValidBST(root->right);
        }
        
        return 0;
    }
    bool check(TreeNode* root, int val, int x) {
        if(root == NULL)
            return 1;
        
        if(x == 0 && root->val >= val) return 0;
        
        if(x == 1 && root->val <= val) return 0;
        
        return check(root->left, val, x) && check(root->right, val, x);
    }
};