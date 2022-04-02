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
    int m1 = -1, m2 = -1;
    
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root); cout<<m2;
        return m2;
    }
    
    void dfs(TreeNode* root) {
        if(root == NULL)
            return;
        //cout<<"HERE";
        if(m1 == -1 || root->val < m1) {
            m2 = m1;
            m1 = root->val; //cout<<m1;
        } else if (root->val != m1 && (root->val < m2 || m2 == -1)) {
            m2 = root->val; //cout<<m2;
        }
        
        dfs(root->left);
        dfs(root->right);
    }
};