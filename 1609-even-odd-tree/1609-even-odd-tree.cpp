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
    bool isEvenOddTree(TreeNode* root, int lev = 0) {
        if(root == NULL) return 1;
        
        if(res.size() < lev+1) {
            if(lev & 1) {
                if(root->val & 1) return 0;
            } else if(root->val % 2 == 0) return 0;
            
            res.push_back(root->val);
        } else {
            if(lev & 1) {
                if(root->val & 1 || root->val >= res[lev]) return 0;
                else res[lev] = root->val;
            } else {
                if(root->val % 2 == 0 || root->val <= res[lev]) return 0;
                else res[lev] = root->val;
            }
        }
        
        return isEvenOddTree(root->left, lev+1) && isEvenOddTree(root->right, lev+1);
    }
};