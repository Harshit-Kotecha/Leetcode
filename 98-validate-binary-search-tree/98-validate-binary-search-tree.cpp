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
        
        if(checkLeft(root->left, root->val) && checkRight(root->right, root->val)) {
            return isValidBST(root->left) && isValidBST(root->right);
        }
        
        return 0;
    }
    bool checkLeft(TreeNode* root, int val) {
        if(root == NULL)
            return 1;
        
        if(root->val >= val) return 0;
        
        return checkLeft(root->left, val) && checkLeft(root->right, val);
    }
    bool checkRight(TreeNode* root, int val) {
        if(root == NULL) return 1;
        
        if(root->val <= val) return 0;
        
        return checkRight(root->right, val) && checkRight(root->left, val);
    }
};