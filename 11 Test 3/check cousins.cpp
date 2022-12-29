// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;.
        right = NULL;
    }
};
***************/
bool isSibling(BinaryTreeNode<int>* root, int a, int b){
    if(root == NULL){
        return false;    
    }
    
    if(root->left && root->right){
		return ((root->left->data == a && root->right->data == b) || (root->left->data == b && root->right->data == a) || isSibling(root->left, a, b) || isSibling(root->right, a, b));
    }
    else{
        return false;
    }
}

int level(BinaryTreeNode<int>* root, int val, int lev){
    if(root==NULL){
        return 0;
    }
    
    if(root->data == val){
        return lev;
    }
    int l = level(root->left, val, lev+1);
    if(l!=0){
        return l;
    }
    else{
        return level(root->right, val, lev+1);
    }
}

bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
    if(level(root, p,1) == level(root, q,1) && !(isSibling(root, p, q))){
        return true;
    }
    else{
        return false;
    }

}
