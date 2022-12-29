TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* max = root;
	for(int i=0; i<root->children.size(); i++){
        TreeNode<int>* ans = maxDataNode(root->children[i]);
        if(ans->data > max->data){
            max = ans;
        }
        
    }
    return max;
}