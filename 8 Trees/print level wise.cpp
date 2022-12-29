void printLevelWise(TreeNode<int>* root) {
    // Write your code here 
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size(); i++){
            if(i==0){
                cout << front->children[i]->data;
            }
            else
                cout<<","<<front->children[i]->data;
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }
    
}