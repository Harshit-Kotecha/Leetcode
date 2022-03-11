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
    TreeNode* removeLeafNodes(TreeNode* root, int val) {
        if(root == NULL)
            return root;
        
        bool flag = false;
        root = dfs(root, val, flag);
        
        while(flag && root) {
            flag = false;
            root = dfs(root, val, flag);
        }
        
        return root;
    }
    TreeNode* dfs(TreeNode* root, int val, bool &flag) {
        if(root == NULL)
            return root;
        
        if(root->left==NULL && root->right==NULL && root->val == val) {
            flag = true;
            return NULL;
        }
        
        root->left = dfs(root->left, val, flag);
        root->right = dfs(root->right, val, flag);
        
        return root;
        
    }
};