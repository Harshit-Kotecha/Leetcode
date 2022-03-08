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
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL)
            return 0;
        long m1 = LONG_MAX, m2 = LONG_MAX;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            root = q.front();
            q.pop();
            if(root->val < m1) {
                m2 = m1;
                m1 = root->val;
            }
            else if(root->val != m1 && root->val < m2) {
                m2 = root->val;
            }
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
        }
        return m2 == LONG_MAX ? -1 : m2;
    }
};