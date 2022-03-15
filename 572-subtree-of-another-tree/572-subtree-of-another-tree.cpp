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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL)
            return root == subRoot;
//         if(root->val == subRoot->val)
//             return check(root, subRoot);
        
        return check(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right,subRoot);
        
    }
    bool check(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL)
            return root == subRoot;
        return root->val==subRoot->val && check(root->left, subRoot->left) && check(root->right, subRoot->right);
    }
};