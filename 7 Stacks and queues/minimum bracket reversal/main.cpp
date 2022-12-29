#include <stack>
int countBracketReversals(string input) {
	// Write your code here
    int len = input.length();
    if(len%2==1){
        return -1;
    }
    
    stack<char> s;
	for(int i=0;i<len;i++){
        if(input[i] == '{'){
            s.push(input[i]);
        }
        else if(input[i] == '}'&& s.empty()){
            s.push(input[i]);
        }
        else if(input[i] == '}' && !(s.empty())){
            if(s.top()=='{'){
                s.pop();
            }
            else
                s.push('}');
        }
    }
    
    int count = 0;
    while(!s.empty()){
        int c1 = s.top();
        s.pop();
        int c2 = s.top();
        s.pop();
        if(c1==c2){
            count++;
        }
        else{
            count+=2;
        }
    }
    return count;
}