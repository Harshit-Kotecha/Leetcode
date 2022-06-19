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
    long pre = LONG_MIN;
    bool f = 1;
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return 1; 
        
        dfs(root);
        return f;
    }
    void dfs(TreeNode* root) {
        if(root == NULL || f == 0) return ;
        
        dfs(root->left);
        
        if(pre != LONG_MIN) {
            if(root->val <= pre) f = 0;
        }
        pre = root->val;
        
        dfs(root->right);
            
    }
};