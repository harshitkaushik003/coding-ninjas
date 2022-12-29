bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    bool temp1 = isNodePresent(root->left,x);
    bool temp2 = isNodePresent(root->right,x);
    if(temp1 == true){
        return true;
    }
    if(temp2 == true){
        return true;
    }
    return false;
}