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
    string res;
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return res;
    }
    void dfs(TreeNode* root, string path) {
        if(root == NULL)
            return ;
        
        path += root->val + 'a';
        
        if(root->left == root->right) {
            reverse(path.begin(), path.end());
            if(res.empty()) {
                res = path;
                return;
            }
            int i = 0, j = 0;
            while(i<res.length()&&j<path.length()&&res[i] == path[j]) i++, j++;
            
            if(i == res.length() && j != path.length()) {
                return;
            }
            if(j == path.length() && i < res.length()) {
                res = path;
                return;
            }
            if(path[j] < res[i]) {
                res = path;
                return ;
            }
            return;
                
        }
        
        dfs(root->left, path);
        dfs(root->right, path);
    }
};