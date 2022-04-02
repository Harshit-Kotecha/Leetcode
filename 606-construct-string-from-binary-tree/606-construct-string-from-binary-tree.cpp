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
    string s;
    string tree2str(TreeNode* root) {
        if(root == NULL)
            return "";
        //s += to_string(root->val);
        dfs(root);
        string res;
        for(int i = 1; i < s.length()-1; i++) {
            if((i+1 < s.length()-1) && s[i] == '(' && s[i+1] == ')') {
                if(i+2 < s.length()-2 && s[i+2] == '(' && s[i+3] == ')') {
                    i += 3;
                    continue;
                } else if(s[i+2] == '(') {
                    res += "()";
                    i++;
                    continue;
                } 
                i++;
                continue;
            }
            res += s[i];
        }
        return res;
    }
    void dfs(TreeNode* root) {
        if(root == NULL) {
            s += "()";
            return ;
        }
        
        s += '(' + to_string(root->val);
        
        dfs(root->left);
        dfs(root->right);
        
        s += ')';
    }
};