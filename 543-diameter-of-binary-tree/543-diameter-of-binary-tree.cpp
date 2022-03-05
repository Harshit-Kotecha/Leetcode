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
    int max = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        int h = height(root);
        return max;
    }
    int height(TreeNode* root) {
        if(root == NULL)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        
        max = std::max(left+right, max);
        
        return 1 + std::max(left, right);
    }
};