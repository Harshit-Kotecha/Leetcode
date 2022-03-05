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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return root;
        if(key < root->val)
            root->left = deleteNode(root->left, key);
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        else {
            TreeNode* temp;
            if(root->left == NULL && root->right == NULL) {
                temp = root;
                root = NULL;
                delete(temp);
            }
            else if(root->left == NULL) {
                temp = root;
                root = root->right;
                delete(temp);
            }
            else if(root->right == NULL) {
                temp = root;
                root = root->left;
                delete(temp);
            }
            else {
                temp = root->right;
                while(temp && temp->left)
                    temp = temp->left;
                root->val = temp->val;
                root->right = deleteNode(root->right, temp->val);
            }
        }
        return root;
    }
};