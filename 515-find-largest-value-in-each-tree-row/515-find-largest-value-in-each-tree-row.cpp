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
    vector<int> res;
    vector<int> largestValues(TreeNode* root) {
        dfs(root, 1);
        return res;
    }
    void dfs(TreeNode* root, int level) {
        if(root == NULL) return;
        if(level > res.size()) {
            res.push_back(INT_MIN);
        }
        if(root->val > res[level - 1]) {
            res[level - 1] = root->val;
        }
        
        
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }
};