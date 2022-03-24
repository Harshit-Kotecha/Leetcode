/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * }; if(prev == -1 && root->val & 1 || (prev != -1 && root->val >))
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root == NULL) return 1;
        
        queue<TreeNode*> q;
        q.push(root);
        int lev = 0;
        while(!q.empty()) {
            int prev = -1;
            for(int i = 0, s = q.size(); i < s; i++) {
                root = q.front(); 
                q.pop();
                if(lev & 1) {
                    if(root->val & 1 || (prev != -1&&root->val >= prev))return 0;
                } else {
                    if(root->val % 2 == 0||(prev!=-1&&root->val<= prev)) return 0;
                }
                prev = root->val;
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            lev++;
        }
        return 1;
    }
};