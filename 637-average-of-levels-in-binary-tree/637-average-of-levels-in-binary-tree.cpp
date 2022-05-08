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
    vector<double> averageOfLevels(TreeNode* root) {
        unordered_map<int, pair<double, int>> m;
        dfs(root, m, 1);
        vector<double> res(m.size());
        for(auto& i : m) {
            res[i.first - 1] = (i.second.first) / (i.second.second);
            //cout<<i.first<<" "<<i.second<<endl;;
        }
        return res;
    }
    void dfs(TreeNode* root, unordered_map<int, pair<double, int>>& m, int lev) {
        if(root == NULL) return ;
        m[lev].first += root->val;
        m[lev].second++;
        dfs(root->left, m, lev+1);
        dfs(root->right, m, lev+1);
    }
};