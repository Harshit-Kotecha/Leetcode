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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return root;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty() || root) {
            root = st.top();
            st.pop();
            if(root->val == val)
                return root;
            else if(val < root->val) {
                if(root->left)
                    root = root->left;
                else
                    return NULL;
            }
            else if(val > root->val) {
                if(root->right)
                    root = root->right;
                else
                    return NULL;
            }
            st.push(root);
                
        }
        return NULL;
        
    }
};