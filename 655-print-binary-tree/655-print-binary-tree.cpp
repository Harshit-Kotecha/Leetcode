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
    int h = 0;
    int height(TreeNode* root) {
        if(root == NULL) return 0;
        
        return max(height(root->left), height(root->right)) + 1;
    }
    vector<vector<string>> printTree(TreeNode* root) {
        h = height(root) - 1;
        int m = h + 1, n = pow(2, m) - 1;
        if(m < 0 || n < 0) return {};
        vector<vector<string>> rs(m, vector<string>(n, ""));
        rs[0][(n - 1) / 2] = to_string(root->val);
        dfs(root, rs, 0, (n - 1) / 2);
        return rs;
    }
    
    void dfs(TreeNode* root, vector<vector<string>>& rs, int r, int c) {
        if(root == NULL) return;
        
        if(root->left) rs[r+1][c - pow(2, h - r - 1)] =  to_string(root->left->val);
        if(root->right) rs[r+1][c + pow(2, h - r - 1)] = to_string(root->right->val);
        
        dfs(root->left, rs, r+1, c - pow(2, h - r - 1));
        dfs(root->right, rs, r+1, c + pow(2, h - r - 1));
        
    }
};