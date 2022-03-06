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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root == NULL)
            return res;
        path(root, "", res);
        return res;
    }
    void path(TreeNode* root, string dfspath, vector<string>& res) {
        if(root == NULL)
            return ;
        if(root->left == NULL && root->right == NULL) {
            dfspath += (to_string)(root->val);
            res.push_back(dfspath);
            //return;
        }
            
        if(root->left)
            path(root->left, dfspath + (to_string)(root->val) + "->", res);
        if(root->right)
            path(root->right, dfspath + (to_string)(root->val) + "->", res);
        
    }
};