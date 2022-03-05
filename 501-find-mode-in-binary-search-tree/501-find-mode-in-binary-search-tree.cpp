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
    vector<int> findMode(TreeNode* root) {
        if(root == NULL)
            return {};
        unordered_map<int, int> map;
        inorder(root, map);
        int f = 0;
        vector<int> res;
        for(auto& m : map) {
            if(m.second > f) {
                res.clear();
                f = m.second;
                res.push_back(m.first);
            }
            else if(m.second == f)
                res.push_back(m.first);
        }
        return res;
    }
    void inorder(TreeNode* root, unordered_map<int, int>& map) {
        if(root == NULL)
            return ;
        inorder(root->left, map);
        map[root->val]++;
        inorder(root->right, map);
    }
};