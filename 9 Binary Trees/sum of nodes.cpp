int getSum(BinaryTreeNode<int>* root) {
    // Write your code here
	if(root==NULL){
		return 0;
	}
	int rsum = getSum(root->right);
	int lsum = getSum(root->left);
	return rsum+root->data+lsum;
}