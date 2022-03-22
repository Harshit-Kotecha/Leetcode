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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        TreeNode* dmy = new TreeNode(0);
        TreeNode* curr = dmy;
        for(int x : res) {
            curr = curr->right = new TreeNode(x);
        }
        return dmy->right;
    }
    void dfs(TreeNode* root, vector<int>& res) {
        if(root == NULL) return;
        dfs(root->left, res);
        res.push_back(root->val);
        dfs(root->right, res);
    }
};