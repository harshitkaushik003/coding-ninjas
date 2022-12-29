vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<Node<int>*> heads = {NULL};
    if(root==NULL){
        return heads;
    }
    else{
        heads.clear();
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        int n = pendingNodes.size();
        Node<int>* head =  NULL;
        Node<int>* tail = NULL;
        while(n!=0){
            BinaryTreeNode<int>* front = pendingNodes.front();
            pendingNodes.pop();
            Node<int>* newnode = new Node<int>(front->data);
            if(head==NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
            if(front->left)
                pendingNodes.push(front->left);
            if(front->right)
                pendingNodes.push(front->right);
            n--;
        }
        heads.push_back(head);
    }
    return heads;
}