class Stack {
	// Define the data members
    Node *head;
    int size;
    
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return head==NULL;
    }

    void push(int element) {
        // Implement the push() function
        Node* newnode = new Node(element);
        if(head==NULL){
            head=newnode;
            size++;
        }
        else{
            newnode->next = head;
            head = newnode;
            size++;
        }
    }

    int pop() {
        // Implement the pop() function
        if(isEmpty()){
            return -1;
        }
        int ans = head->data;
        head = head->next;
        size--;
        return ans;
    }

    int top() {
        // Implement the top() function
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};