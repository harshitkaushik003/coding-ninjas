void helper(TreeNode<int>* root, int depth=0){
    if(root==NULL){
        return;
    }
    root->data = depth;
    for(int i=0; i<root->children.size(); i++){
        helper(root->children[i], depth+1);
    }
}
void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    helper(root);
    
}