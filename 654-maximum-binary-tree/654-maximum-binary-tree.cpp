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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return bfs(nums, 0, nums.size()-1);
    }
    TreeNode* bfs(vector<int>& nums, int lo, int hi) {
        if(lo > hi) return {};
        int m = lo;
        for(int i = lo; i <= hi; i++) {
            if(nums[i] > nums[m]) {
                m = i;
            }
        }
        TreeNode* root = new TreeNode(nums[m]);
        root->left = bfs(nums, lo, m - 1);
        root->right = bfs(nums, m+1, hi);
        return root;
    }
};