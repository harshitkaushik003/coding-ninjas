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

class BST {
    // Define the data members
    BinaryTreeNode<int>* root;
   public:
    BST() { 
        // Implement the Constructor
        root = NULL;
    }
    ~BST(){
        delete root;
    }

	/*----------------- Public Functions of BST -----------------*/
	private:
    bool search(int data, BinaryTreeNode<int>* node){
        if(node==NULL){
            return false;
        }
        if(node->data==data){
            return true;
        }
        else if(data < node->data){
            return search(data, node->left);
        }
        else{
            return search(data, node->left);
        }
    }
    public:
        bool search(int data) {
		// Implement the search() function
        return search(data, root);
    }
    private:
 	BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int>* node) {
		if (node == NULL) {
			BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
			return newNode;
		}

		if (data <= node->data) {
			node->left = insert(data, node->left);
		} else {
			node->right = insert(data, node->right);
		}
		return node;
	}
    public:
        void insert(int data) { 
        // Implement the insert() function
        root = insert(data, root);
    }
    private:
    BinaryTreeNode<int>* remove(int data, BinaryTreeNode<int>* node){
        if(node==NULL){
            return NULL;
        }
        if(data < node->data){
        	node->left = remove(data, node->left);
            return node;
        }
        else if(data>node->data){
            node->right = remove(data, node->right);
            return node;
        }
        else{
			if (node->left == NULL && node->right == NULL) {
				delete node;
				return NULL;
			} else if (node->left == NULL) {
				BinaryTreeNode<int>* temp = node->right;
				node->right = NULL;
				delete node;
				return temp;
			} else if (node->right == NULL) {
				BinaryTreeNode<int>* temp = node->left;
				node->left = NULL;
				delete node;
				return temp; 
			} else {
				BinaryTreeNode<int>* minNode = node->right;
				while (minNode->left != NULL) {
					minNode = minNode->left;
				}
				int rightMin = minNode->data;
				node->data = rightMin;
				node->right = remove(rightMin, node->right);
				return node;
            }
        }
    }
    public:
    void remove(int data) { 
        // Implement the remove() function
        root = remove(data, root);
    }
    void print(BinaryTreeNode<int>* node){
        if(node==NULL){
            return;
        }
        cout<<node->data<<":";
        if(node->left!=NULL){
            cout<<"L:"<<node->left->data<<",";
        }
        if(node->right!=NULL){
            cout<<"R:"<<node->right->data;
        }
        cout<<endl;
        print(node->left);
        print(node->right);
    }
    


    void print() { 
        // Implement the print() function
        print(root);
    }




};