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
    int cnt = 1, maxi = 0;
    TreeNode* prev = NULL;
    vector<int> findMode(TreeNode* root) {
        vector<int> mode;
        inorder(root, mode);
        return mode;
    }
    void inorder(TreeNode* root, vector<int>& mode) {
        if(root == NULL) return;
        
        inorder(root->left, mode);
        
        if(prev != NULL) {
            if(prev->val == root->val) {
                cnt++;
            } else {
                cnt = 1;
            }
            
        }
        if(cnt > maxi) {
                maxi = cnt;
                mode.clear();
                mode.push_back(root->val);
            } else if(cnt == maxi) {
                mode.push_back(root->val);
            }
        prev = root;
        
        inorder(root->right, mode);
    }
};