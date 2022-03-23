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
        res = root->val;
        dfs(root, 0, 1);
        //if(maxi == -1 && root->right != NULL) return root->right->val; 
        return res;
    }
    void dfs(TreeNode* root, int lev, int left) {
        if(root == NULL) return;
        
        if(left && lev > maxi) {
            maxi = lev;
            res = root->val;
        } 
        
        dfs(root->left, lev+1, 1);
        dfs(root->right, lev+1, 1);
    }
};