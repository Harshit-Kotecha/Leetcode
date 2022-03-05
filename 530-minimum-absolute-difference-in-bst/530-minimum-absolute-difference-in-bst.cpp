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
    TreeNode* prev = NULL;
    int getMinimumDifference(TreeNode* root) {
        int diff = INT_MAX;
        inorder(root, diff);
        return diff;
    }
    void inorder(TreeNode* root, int& diff) {
        if(root == NULL)
            return ;
        inorder(root->left, diff);
        if(prev != NULL)
            diff = min(diff, abs(root->val - prev->val));
        prev = root;
        inorder(root->right, diff);
    }
    
};