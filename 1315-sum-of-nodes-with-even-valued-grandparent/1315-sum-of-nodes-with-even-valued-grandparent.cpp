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
    int sum = 0;
    int sumEvenGrandparent(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root->left && root->left->left && root->val % 2==0) {
            sum += root->left->left->val;
        }
        if(root->left && root->left->right && root->val % 2==0) {
            sum += root->left->right->val;
        }
        if(root->right && root->right->left && root->val % 2 == 0) {
            sum += root->right->left->val;
        }
        if(root->right && root->right->right &&root->val % 2 == 0) {
            sum += root->right->right->val;
        }
        if(root->left)
            sumEvenGrandparent(root->left);
        if(root->right)
            sumEvenGrandparent(root->right);
        
        return sum;
    }
};