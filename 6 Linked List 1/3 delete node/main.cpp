Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if (head==NULL)
    {
        return head;
    }
    Node *temp = head;
    int count=0;
    if(pos == 0)
    {
        head = temp->next;
        delete temp;
        return head;
        
    }
    while (temp!=NULL && count<pos-1)
    {
        count++;
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL)
    {
        return head;
        
    }
    else{
        Node *a = temp->next;
        temp->next = a->next;
        delete a;
        return head;
    }
   
    
}