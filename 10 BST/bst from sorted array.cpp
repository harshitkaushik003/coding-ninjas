BinaryTreeNode<int>* helper(int *input, int si, int ei){
    if(si>ei){
        return NULL;
    }
 
    int mid = si + (ei-si)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);
    root->left = helper(input, si, mid-1);
    root->right = helper(input, mid+1, ei);
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    if(n==0){
        return NULL;
    }
    return helper(input, 0, n-1);
}