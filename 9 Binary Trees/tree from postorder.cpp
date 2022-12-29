BinaryTreeNode<int>* helper(int *in, int *post, int ins, int ine, int posts,int poste){
    if(posts>poste){
        return NULL;
    }
    int rootData=post[poste];
    int rootIndex=-1;
    for(int i=ins; i<=ine; i++){
        if(in[i] == rootData){
            rootIndex = i;
            break;
        }
    }
    int lInS = ins;
    int lInE = rootIndex-1;
    int lPostS = posts;
    int lPostE = lInE - lInS + lPostS ;
    
    int RInS = rootIndex + 1;
    int RInE = ine;
    int RPostS = lPostE+1;
    int RPostE = poste - 1;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = helper(in, post, lInS, lInE, lPostS, lPostE);
    root->right = helper(in, post, RInS, RInE, RPostS,RPostE);
    return root;
    
}
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    return helper(inorder, postorder, 0, inLength-1, 0, postLength-1);
}