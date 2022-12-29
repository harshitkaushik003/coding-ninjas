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
void printSubtreeNodes(BinaryTreeNode<int>* root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
    }
    
    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

int printNodesatk(BinaryTreeNode<int>* root, int target, int k){
    if(root==NULL)
        return -1;
    
    if(root->data==target){
        printSubtreeNodes(root, k);
        return 0;
    }
    
    int dl = printNodesatk(root->left, target, k);
    if(dl!=-1){
        if(dl + 1 == k){
           cout<<root->data<<endl;
        }
        
        else{
            printSubtreeNodes(root->right, k-dl-2);
        }
        
        return 1 + dl;
    }
    
    int dr = printNodesatk(root->right,target, k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<endl;
        }
        else{
            printSubtreeNodes(root->left, k-dr-2);
        }
        return 1+dr;
    }
    return -1;
    
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code herez
    int x = printNodesatk(root,node,k);
}