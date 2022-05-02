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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            TreeNode *node = new TreeNode(val);
            node->left = root;
            return node;
        };
        dfs(root, 1, depth, val);
        return root;
    }
    void dfs(TreeNode* root, int d, int depth, int val) {
        if(root == NULL) return;
        
        if(d + 1 == depth) {
            if(root == NULL) return;
            TreeNode *l = root->left, *r = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = l;
            root->right->right = r;
            return;
        }
        dfs(root->left, d+1, depth, val);
        dfs(root->right, d+1, depth, val);
    }
};