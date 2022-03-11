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
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, "");
        return sum;
    }
    void dfs(TreeNode *root, string path) {
        if(root == NULL)
            return;
        
        path += to_string(root->val);
        
        if(root->left == NULL && root->right == NULL) {
            //cout<<path<<" ";
            // for(int i = path.length()-1; i >= 0; i--) {
            //     sum += (path[i] - '0') * pow(2, i);
            // }
            sum += stol(path, 0, 2);
            return;
        }
        
        dfs(root->left, path);
        dfs(root->right, path);
    }
};