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
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL)
            return 0;
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            //vector<int> level;
            sum = 0;
            for(int i = 0; i < size; i++) {
                root = q.front();
                q.pop();
                //level.push_back(root->val);
                sum += root->val;
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            // if(q.empty()) {
            //     for(int x : level)
            //         sum += x;
            // }
        }
        return sum;
    }
};