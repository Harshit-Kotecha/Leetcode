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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        findSum(root, sum, {});
        return res;
    }
    void findSum(TreeNode* root, int sum, vector<int> path) {
        if(root == NULL)
            return ;
        
        sum -= root->val;
        path.push_back(root->val);
        if(root->left == NULL && root->right == NULL && sum == 0) {
            res.push_back(path);
        }
        
        findSum(root->left, sum, path);
        findSum(root->right, sum, path);
        
    }
};