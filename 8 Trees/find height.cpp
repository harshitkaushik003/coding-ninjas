#include <bits/stdc++.h>
#include <climits>
int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    int height = 1;
    if(root->children.size() == 0){
        return height;
    }
    int neg_inf = INT_MIN;
    for(int i=0; i<root->children.size(); i++){
        int h = getHeight(root->children[i]);
        neg_inf = max(neg_inf, h);
    }
    height += neg_inf;
    return height;
}