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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> res;
        unordered_map<int, int> map;
        dfs(root, map);
        int cnt = 0;
        for(auto m : map) {
            if(m.second > cnt) {
                res.clear();
                res.push_back(m.first);
                cnt = m.second;
            } else if(m.second == cnt) 
                res.push_back(m.first);
        }
        
        return res;
    }
    int dfs(TreeNode* root, unordered_map<int, int>& map) {
        if(root == NULL)
            return 0;
        
        int left = dfs(root->left, map);
        int right = dfs(root->right, map);
        
        map[left + right + root->val]++;
        
        return left + right + root->val;
    }
};