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
    bool isBalanced(TreeNode* root) {
        return h(root) >= 0;
    }
    int h(TreeNode* root) {
        if(root == NULL) return 0;
        
        int l = h(root->left);
        if(l < 0) return INT_MIN;
        
        int r = h(root->right);
        if(r < 0) return INT_MIN;
        
        if(abs(l - r) > 1) return INT_MIN;
        
        return max(l, r) + 1;
    }
};