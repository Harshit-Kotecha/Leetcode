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
    int depth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return 1 + max(depth(root->left), depth(root->right));
    }
    int sum = 0;
    int deepestLeavesSum(TreeNode* root) {
        int maxi = depth(root);
        dfs(root, 0, maxi);
        return sum;
        
    }
    void dfs(TreeNode* root, int n, int maxi) {
        if(root == NULL)
            return ;
        if(++n == maxi)
            sum += root->val;
        dfs(root->left, n, maxi);
        dfs(root->right, n, maxi);
    }
};