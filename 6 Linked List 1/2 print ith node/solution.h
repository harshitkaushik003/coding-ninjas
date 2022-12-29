class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void printIthNode(Node *head, int i)
{
    //Write your code here
    Node *temp = head;
    int j=0;
    while(temp!=NULL)
    {
        if (j==i)
        {
            cout<<temp->data<<endl;
            return;
        }
        temp = temp->next;
        j++;
    }
}