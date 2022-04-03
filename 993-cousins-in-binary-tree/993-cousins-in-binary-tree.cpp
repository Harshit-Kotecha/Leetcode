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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
            return 1;
        
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root, root});
        while(!q.empty()) {
            bool xfnd = 0, yfnd = 0;
            int xpar, ypar;
            pair<TreeNode*, TreeNode*> root;
            for(int i = 0, s = q.size(); i < s; i++) {
                root = q.front();
                q.pop();
                
                if(root.first->val == x) {
                    xfnd = true;
                    xpar = root.second->val;
                }
                if(root.first->val == y) {
                    yfnd = true;
                    ypar = root.second->val;
                }
                if(root.first->left) q.push({root.first->left, root.first});
                if(root.first->right) q.push({root.first->right, root.first});
                
            }
            if(xfnd && yfnd && (xpar != ypar)) {
                return 1;
            }
            if(xfnd || yfnd) return 0;
        }
        return 1;
    }
};