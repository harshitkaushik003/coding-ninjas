class Pair{
    public:
    TreeNode<int> *node;
    int sum;
    

};

Pair helper(TreeNode<int>* root){
    Pair ans;
    int sum = root->data;
    for(int i=0; i<root->children.size(); i++){
        sum += root->children[i]->data;
    }
    ans.node = root;
    ans.sum = sum;
    
    for(int i=0; i<root->children.size(); i++){
        Pair temp;
        temp = helper(root->children[i]);
        if(temp.sum > ans.sum){
            ans.sum = temp.sum;
            ans.node = temp.node;
        }
    }
    return ans;  
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    Pair ans = helper(root);
    return ans.node;
}