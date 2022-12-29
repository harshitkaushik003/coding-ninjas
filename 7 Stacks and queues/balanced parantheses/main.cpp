#include <stack>
bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> s;
    int len = expression.length();
    for(int i=0; i<len;i++){
        if(s.empty() && expression[i] == ')'){
            return false;
        }
        if(expression[i] == '('){
            s.push('(');
        }
        
        else if(expression[i] == ')' && s.top() == '('){
            s.pop();
        }
        
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
    
}