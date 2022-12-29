#include <stack>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s;
    int len = expression.length();
    int a=0;
    while(expression[a]!='('){
        a++;
    }

    while(expression[a]!=')'){
        s.push(expression[a]);
        a++;
    }
    if(s.size()==2){
        return true;
    }
    
    int count=0;
    while(s.size()!=1){
        if(s.top()=='(' && s.size()>1){
            s.pop();
            count=0;
            if(s.top()=='('){
                return true;
            }
        }
        
        if(s.top()!='('){
            s.pop();
            count++;
        }
        
    }
    if(count==0){
        return true;
    }
    else{
        return false;
    }
    
}