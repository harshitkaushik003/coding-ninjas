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
#include <vector>
void helper(BinaryTreeNode<int>* root, int k, vector<int> v){
    if(root==NULL){
        return;
    }
    v.push_back(root->data);
    k = k-root->data;
    if(!root->left && !root->right){
        if(k==0){
            for(int i:v){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    helper(root->left, k, v);
    helper(root->right, k, v);
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here
    vector<int> v;
    helper(root, k, v);
}