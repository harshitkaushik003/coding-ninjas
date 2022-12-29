void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    stack<int> extra2;
    while(!input.empty()){
        int element = input.top();
        extra2.push(element);
        input.pop();
    }
     while(!extra2.empty()){
        int element = extra2.top();
        extra.push(element);
        extra2.pop();
    }
    while(!extra.empty()){
        int element = extra.top();
        input.push(element);
        extra.pop();
    }
    
    
}