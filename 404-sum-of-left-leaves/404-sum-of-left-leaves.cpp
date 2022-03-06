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
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root, false);
    }
    int sum(TreeNode* root, bool left) {
        if(root == NULL)
            return 0;
        
        if(left && (root->left == NULL && root->right == NULL))
            return root->val;
        
        return sum(root->left, 1) + sum(root->right, 0);
    }
};