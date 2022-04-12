# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        tree_vals = []
        
        def pree(tree):
            if tree:
                tree_vals.append(tree.val)
                pree(tree.left)
                pree(tree.right)
                
        pree(root)
        
        return tree_vals