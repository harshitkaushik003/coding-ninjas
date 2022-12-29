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

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if(root == NULL){
        return NULL;
    }
    if(root->data == data){
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }
    if(root->data > data){
        vector<int>* loutput = getPath(root->left, data);
        if(loutput!=NULL){
            loutput->push_back(root->data);
            return loutput;
        }
        else{
            return NULL;
        }
    }
    else{
        vector<int>* routput = getPath(root->right, data);
        if(routput!=NULL){
            routput->push_back(root->data);
            return routput;
        }
        else{
            return NULL;
        }
    }
}