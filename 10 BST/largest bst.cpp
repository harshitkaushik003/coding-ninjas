/**********************************************************

	Following is the Binary Tree Node class structure

	templaj,te <typename T>
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
#include <climits>
class tree{
    public:
    int minimum;
    int maximum;
    bool isBST;
    int height;
};

tree helper(BinaryTreeNode<int>* root){
    if(root == NULL){
        tree obj;
        obj.minimum = INT_MAX;
        obj.maximum = INT_MIN;
        obj.isBST = true;
        obj.height = 0;
        return obj;
    }
    
    tree lans = helper(root->left);
    tree rans = helper(root->right);
    
    int minimum = min(root->data, min(lans.minimum, rans.minimum));
    int maximum = max(root->data, max(lans.maximum, rans.maximum));
    
    bool isBSTans = (root->data > lans.maximum) && (root->data < rans.minimum) && lans.isBST && rans.isBST;
    
    tree obj;
    obj.minimum = minimum;
    obj.maximum = maximum;
    obj.isBST = isBSTans;
    if(isBSTans){
        obj.height = 1 + max(lans.height, rans.height);
    }
    else{
        obj.height = max(lans.height, rans.height);
    }
    
    return obj;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    tree obj = helper(root);
    return obj.height;
}