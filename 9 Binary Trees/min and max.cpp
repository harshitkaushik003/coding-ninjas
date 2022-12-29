#include <climits>
/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root==NULL){
        pair<int, int> p;
        p.first = INT_MAX;
        p.second = INT_MIN;
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<int, int> p;
        p.first = root->data;
        p.second = root->data;
        return p;
    }
    
    pair<int, int> leftans = getMinAndMax(root->left);
	pair<int, int> rightans = getMinAndMax(root->right);
    int lmin = leftans.first;
    int lmax = leftans.second;
    int rmin = rightans.first;
    int rmax = rightans.second;
    
    pair <int, int> ans;
    ans.first = min(root->data, min(lmin, rmin));
    ans.second = max(root->data, max(lmax, rmax));
    return ans;
}