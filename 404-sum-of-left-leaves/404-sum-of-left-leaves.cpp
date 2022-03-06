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
        if(root == NULL)
            return 0;
        stack<pair<TreeNode*, bool>> st;
        st.push({root, 0});
        int res = 0;
        while(!st.empty()) {
            root = st.top().first;
            bool left = st.top().second;
            st.pop();
            if(left && root->left == NULL && root->right == NULL) {
                res += root->val;
                continue;
            }
            if(root->left)
                st.push({root->left, 1});
            if(root->right)
                st.push({root->right, 0});
        }
        
        return res;
        
    }
};