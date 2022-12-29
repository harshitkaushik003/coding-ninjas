int height(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return true;
    }
    bool lans = isBalanced(root->left);
    bool rans = isBalanced(root->right);
    if(lans && rans){
        if(abs(height(root->left) - height(root->right)) <= 1){
            return true;
        }
        return false;
    }
    return false;
}