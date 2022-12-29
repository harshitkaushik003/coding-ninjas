int height(BinaryTreeNode<int>* root) {
    // Write our code here
    if(root == NULL){
        return 0;
    }
    int h = 1;
    int arr[2] = {0};
    arr[0] = height(root->left);
    arr[1] = height(root->right);
    int hm = max(arr[0], arr[1]);
    return h + hm;
	
}