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
class FindElements {
public:
    TreeNode* root = NULL;
    FindElements(TreeNode* root1) {
        root = root1;
        if(root != NULL) {
            root->val = 0;
            dfs(root);
        }
    }
    void dfs(TreeNode* root) {
        if(root == NULL) return ;
        
        if(root->left) root->left->val = (2 * root->val) + 1;
        if(root->right) root->right->val = (2 * root->val) + 2;
        
        dfs(root->left);
        dfs(root->right);
    }
    bool find(int t) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            for(int i = 0, s = q.size(); i < s; i++) {
                TreeNode *n = q.front();
                q.pop();
                if(t == n->val) return 1;
                if(t < n->val) {
                    while(!q.empty()) {
                        n = q.front();
                        q.pop();
                        if(t == n->val) return 1;
                    }
                    return 0;
                } else {
                    if(n->left) q.push(n->left);
                    if(n->right) q.push(n->right);
                }
            }
        }
        return 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */