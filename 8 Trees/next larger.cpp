TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
	TreeNode<int>* ans = NULL;
    if(root->data > x){
        ans = root;
    }
    
    for(int i=0; i<root->children.size(); i++){
        TreeNode<int>* smallans = getNextLargerElement(root->children[i],x);
        if(smallans != NULL && ans == NULL){
            ans = smallans;
        }
        if(smallans != NULL && ans != NULL){
            if(smallans-> data < ans->data){
                ans = smallans;
            }
        }
    }
    return ans;

}