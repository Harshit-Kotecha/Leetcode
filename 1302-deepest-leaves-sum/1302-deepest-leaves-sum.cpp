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
    
    int sum = 0, maxi = 0;
    int deepestLeavesSum(TreeNode* root) {
        // int maxi = depth(root);
        dfs(root, 0);
        return sum;
        
    }
    void dfs(TreeNode* root, int n) {
        if(root == NULL)
            return ;
        //maxi = max(maxi, ++n);
        n++;
        if(n > maxi) {
            sum = root->val;
            maxi = n;
        } else if(n == maxi) {
            sum += root->val;
        }
        dfs(root->left, n);
        dfs(root->right, n);
    }
};