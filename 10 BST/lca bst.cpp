/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
BinaryTreeNode<int>* helper(BinaryTreeNode<int>* root, int val1, int val2){
    if(root==NULL){
        return NULL;
    }
    
    if(val1 == root->data || val2 == root->data){
        return root;
    }
    
    if(val1 < root->data && val2 < root->data){
        return helper(root->left, val1, val2);
    }
    else if(val1 > root->data && val2 > root->data){
        return helper(root->right, val1, val2);
    }
    else{
        return root;
    }
}
int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    BinaryTreeNode<int>* temp = helper(root, val1, val2);
    if(temp==NULL){
        return -1;
    }
    else{
        return temp->data;
    }
}