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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        unordered_map<int, TreeNode*> node;
        unordered_map<int, int> child;
        
        for(auto& i : d) {
            if(node.count(i[0]) == 0) {
                node[i[0]] = new TreeNode(i[0]);
            } 
            if(node.count(i[1]) == 0) {
                node[i[1]] = new TreeNode(i[1]);
            }
            if(i[2] == 1) {
                node[i[0]]->left = node[i[1]];
            } else {
                node[i[0]]->right = node[i[1]];
            }
            child[i[1]] = 1;
        }
        TreeNode *root = NULL;
        for(auto& i : node) {
            if(child[i.first] == 0) {
                root = node[i.first];
            }
        }
        return root;
    }
};