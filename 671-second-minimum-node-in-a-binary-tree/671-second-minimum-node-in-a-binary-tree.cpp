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
    int m1 =  0, m2 = 0;
    bool found = false;
    
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        return m2 == 0 ? -1 : m2;
    }
    
    void inorder(TreeNode* root) {
        if(root == NULL)
            return;
        inorder(root->left);
        
        if(root->val < m1 || m1 == 0) {
            m2 = m1;
            m1 = root->val;
    
        }
        
        else if((root->val != m1 && (root->val < m2 || m2 == 0))) {
            m2 = root->val;
        }
        inorder(root->right);
    }
};