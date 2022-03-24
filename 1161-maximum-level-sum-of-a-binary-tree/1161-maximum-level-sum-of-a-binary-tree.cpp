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
    vector<int> sum;
    int maxLevelSum(TreeNode* root) {
        dfs(root, 1);
        int lev = 0, maxi = INT_MIN;
        for(int i = 0; i < sum.size(); i++) {
            if(sum[i] > maxi) {
                maxi = sum[i];
                lev = i+1;
            }
        }
        return lev;
    }
    void dfs(TreeNode* root, int lev) {
        if(root == NULL) return ;
        
        if(lev > sum.size()) {
            sum.push_back(0);
        }
        sum[lev - 1] += root->val;
        
        dfs(root->left, lev+1);
        dfs(root->right, lev+1);
    }
};