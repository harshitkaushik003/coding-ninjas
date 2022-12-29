void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    if(root->left){
        if(root->right==NULL)
            cout<<root->left->data<<" ";
    }
    if(root->right){
        if(root->left==NULL){
            cout<<root->right->data<<" ";
        }
    }
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
}