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
    bool hasPathSum(TreeNode* root, int targetSum, int s = 0) {
        if(root == NULL)
            return 0;
        s += root->val;
        if(root->left == NULL && root->right == NULL) {
            if(s == targetSum)
                return 1;
            return 0;
        }
        
        // if(s > targetSum)
        //     return 0;
        
        return hasPathSum(root->left, targetSum, s) || hasPathSum(root->right, targetSum, s);
        
            
    }
    
    
    
};