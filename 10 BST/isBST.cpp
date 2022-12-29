#include <climits>
bool isBST(BinaryTreeNode<int> *root, int min=INT_MIN, int max=INT_MAX) {
	// Write your code here
    if (root == NULL) {
		return true;
	}
	if (root->data < min || root->data > max) {
		return false;
	}
	bool isLeftOk = isBST(root->left, min, root->data - 1);
	bool isRightOk = isBST(root->right, root->data, max);
	return isLeftOk && isRightOk;
}