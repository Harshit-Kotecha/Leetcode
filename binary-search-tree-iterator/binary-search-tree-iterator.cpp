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
class BSTIterator {
public:
    vector<int> q;
    int it = 0;
    BSTIterator(TreeNode* root) {
        stack<TreeNode*> st;
            while(!st.empty() || root != NULL) {
                while(root) {
                    st.push(root);
                    root = root->left;
                }
                root = st.top();
                st.pop();
                q.push_back(root->val);
                root = root->right;
            }
    }
    
    int next() {
        return q[it++];
        
    }
    
    bool hasNext() {
        return it < q.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */