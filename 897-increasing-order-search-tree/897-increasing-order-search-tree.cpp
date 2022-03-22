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
    TreeNode* curr;
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dmy = new TreeNode(0);
        curr = dmy;
        dfs(root);
        return dmy->right;
    }
    void dfs(TreeNode* root) {
        if(root == NULL) 
            return;
        
        dfs(root->left);
        
        curr->right = root;
        curr = curr->right;
        curr->left = NULL;
        dfs(root->right);
    }
};