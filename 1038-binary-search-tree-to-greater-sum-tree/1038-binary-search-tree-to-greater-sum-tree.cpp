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
    int cnt = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root == NULL) return {};
        
        dfs(root);
        return root;
    }
    void dfs(TreeNode *n) {
        if(n == NULL) return;
        
        dfs(n->right);
        cnt += n->val;
        n->val = cnt;
        dfs(n->left);
    }
};