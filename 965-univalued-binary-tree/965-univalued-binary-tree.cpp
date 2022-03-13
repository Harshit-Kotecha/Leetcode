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
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL)
            return 1;
        
        if(root->left && root->val != root->left->val)
            return 0;
        if(root->right && root->val != root->right->val)
            return 0;
        
        return isUnivalTree(root->left) && isUnivalTree(root->right);
            
        
    }
};