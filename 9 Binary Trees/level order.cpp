void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        int size = pendingNodes.size();
        for(;size!=0; size--){
            BinaryTreeNode<int>* front = pendingNodes.front();
        
        	cout<<front->data<<" ";
        
        	pendingNodes.pop();
        	if(front->left){
            	pendingNodes.push(front->left);
        	}
        	if(front->right){
            	pendingNodes.push(front->right);
        	}
            
        }
        cout<<endl;
        
    }
        
}