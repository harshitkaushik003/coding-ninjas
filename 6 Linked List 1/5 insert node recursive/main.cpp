#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node();
    Node(int data){
        this->data = data;
    }
};

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    if(head==NULL){
        return head;
    }
    
    if(i==0){
        Node *newnode = new Node(data);
        Node* temp = head;
        head = newnode;
        newnode->next = temp;
        return head;
    }
    
    else if(i==1){
        Node* newnode = new Node(data);
        Node *temp = head->next;
        head->next = newnode;
        newnode->next = temp;
        return head;
    }
    else
         insertNode(head->next,i-1,data);
	return head;
}
