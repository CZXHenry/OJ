/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	int maxDepth(TreeNode *root) {
		if (root == NULL)
		{
			return 0;
		}
		else
		{
			int left_depth;
			int right_depth;
			left_depth = maxDepth(root->left);
			right_depth = maxDepth(root->right);
			return 1 + (left_depth > right_depth ? left_depth : right_depth);
		}
	}
};
