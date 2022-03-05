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
    bool isValidBST(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        for(int i = 1; i < res.size(); i++) {
            if(res[i] <= res[i-1])
                return 0;
        }
        return 1;
    }
    void inorder(TreeNode* root, vector<int>& res) {
        if(root == NULL)
            return ;
        
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
};