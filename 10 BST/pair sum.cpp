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
#include <bits/stdc++.h>
#include <vector>
void convert(BinaryTreeNode<int>* root, vector<int>* arr){
    if(root==NULL){
        return;
    }
    arr->push_back(root->data);
    convert(root->left, arr);
    convert(root->right, arr);
}
void pairSum(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
    vector<int>* arr = new vector<int>();
 	convert(root,arr);
    sort(arr->begin(), arr->end());
    int i=0;
    int j = arr->size()-1;
    while (i<j){
        if(arr->at(i) + arr->at(j) == sum){
            cout<<arr->at(i)<<" "<<arr->at(j)<<endl;
            i++;
            j--;
        }
        else if(arr->at(i) + arr->at(j) > sum){
            j--;
        }
        else{
            i++;
        }
    }
}