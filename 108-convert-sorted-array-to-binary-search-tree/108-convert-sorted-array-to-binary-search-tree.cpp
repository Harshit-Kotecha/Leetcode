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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums, 0, nums.size() - 1);
    }
    TreeNode* bst(vector<int> nums, int lo, int hi) {
        if(lo <= hi) {
            int mid = (lo + hi) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = bst(nums, lo, mid - 1);
            root->right = bst(nums, mid + 1, hi);
            return root;
        }
        return {};
    }
};