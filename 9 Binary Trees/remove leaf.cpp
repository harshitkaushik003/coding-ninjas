BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        return NULL;
    }
    BinaryTreeNode<int>* lans = removeLeafNodes(root->left);
    BinaryTreeNode<int>* rans = removeLeafNodes(root->right);
 	root->left = lans;
    root->right = rans;
    return root;
}