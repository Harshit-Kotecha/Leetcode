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
    int res = 0, maxi = -1;
    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 0);
        return res;
    }
    void dfs(TreeNode* root, int lev) {
        if(root == NULL) return;
        
        if(lev > maxi) {
            maxi = lev;
            res = root->val;
        } 
        
        dfs(root->left, lev+1);
        dfs(root->right, lev+1);
    }
};