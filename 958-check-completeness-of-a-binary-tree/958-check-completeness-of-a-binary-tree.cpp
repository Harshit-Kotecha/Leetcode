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
    int level(TreeNode* root) {
        if(root == NULL) return 0;
        
        return max(level(root->left), level(root->right)) + 1;
    }
    bool isCompleteTree(TreeNode* root) {
        if(root == NULL) return 1;
        int le = level(root), l = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            vector<bool> lev;
            for(int i = 0, s = q.size(); i < s; i++) {
                root = q.front();
                q.pop();
                if(root == NULL) lev.push_back(false);
                else lev.push_back(true);
                if(root) {
                    q.push(root->left);
                    q.push(root->right);
                }
            }
            l++;
            if(l != le) {
                for(auto l : lev) if(l == false) return false;
            } else {
                bool start = false;
                for(auto i : lev) {
                    if(start == true && i == true) {
                        return false;
                    }
                    if(i == false) {
                        start = true;
                    }
                }
                break;
            }
        }
        return 1;
    }
};