BinaryTreeNode<int>* helper(int *in, int *pre, int ins, int ine, int pres, int pree){
    if(ins>ine){
        return NULL;
    }
    int rootData = pre[pres];
    int rootIndex = -1;
    for(int i=ins; i<=ine; i++){
        if(in[i] == rootData){
            rootIndex = i;
            break;
        }
    }
    int lins = ins;
    int line = rootIndex-1;
    int lpres = pres+1;
    int lpree = line - lins + lpres;
    
    int rins = rootIndex+1;
    int rine = ine;
    int rpres = lpree+1;
    int rpree = pree;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = helper(in, pre, lins, line, lpres, lpree);
    root->right = helper(in, pre, rins, rine, rpres, pree);
    return root;
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    return helper(inorder, preorder, 0, inLength-1, 0, preLength-1);
}