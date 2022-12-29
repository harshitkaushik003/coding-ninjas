/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
BinaryTreeNode<int>* helper(BinaryTreeNode<int>* root, int a, int b){
    if(root==NULL){
        return NULL;
    }
    if(a==root->data || b == root->data){
        return root;
    }
    
    BinaryTreeNode<int>* lans = helper(root->left, a, b);
    BinaryTreeNode<int>* rans = helper(root->right, a,b);
    if(lans==NULL && rans == NULL){
        return NULL;
    }
    else if(lans==NULL){
        return rans;
    }
    else if(rans == NULL){
        return lans;
    }
    else{
        return root;
    }
}
int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    // Write your code here
    if(root==NULL){
        return -1;
        
    }
    BinaryTreeNode<int>* temp = helper(root, a, b);
    if(temp==NULL){
        return -1;
    }
    else{
        return temp->data;
    }
    
}