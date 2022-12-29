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

Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if (head == NULL || head->next==NULL){
        return head;
    }
    if(pos==0){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    else if(pos==1){
        Node* temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
    else
        deleteNodeRec(head->next,pos-1);
    return head;
}