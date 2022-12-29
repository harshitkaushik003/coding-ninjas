void getSecondLargest(TreeNode<int> *root, TreeNode<int> **secondLargestNode, TreeNode<int> **largestNode)
{
    if (*largestNode == NULL)
        *largestNode = root;
    else if (*secondLargestNode == NULL && (root->data) < ((*largestNode)->data))
        *secondLargestNode = root;
    else if ((root->data) > ((*largestNode)->data))
    {
        *secondLargestNode = *largestNode;
        *largestNode = root;
    }
    else if ((root->data) < ((*largestNode)->data) && (root->data) > ((*secondLargestNode)->data))
        *secondLargestNode = root;
    for (int i = 0; i < root->children.size(); i++)
        getSecondLargest(root->children[i], secondLargestNode, largestNode);
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    if (root == NULL || root->children.size() == 0)
        return NULL;
    TreeNode<int> *secondLargestNode = NULL;
    TreeNode<int> *largestNode = NULL;
    getSecondLargest(root, &secondLargestNode, &largestNode);
    return secondLargestNode;
}