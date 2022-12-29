#include <iostream>
#include <string>
using namespace std;
string keys(int n)
{
    if (n==2)
    {
        return "abc";
    }
    
    else if (n==3)
    {
        return "def";
    }
    
    else if (n==4)
    {
        return "ghi";
    }
    
    else if (n==5)
    {
        return "jkl";
    }
    
    else if (n==6)
    {
        return "mno";
    }
    
    else if (n==7)
    {
        return "pqrs";
    }
    
    else if (n==8)
    {
        return "tuv";
    }
    
    else if (n==9)
    {
        return "wxyz";
    }
}
void helper(int num, string out)
{
    if (num==0)
    {
        cout<<out<<endl;
        return;
    }
    
    int lastdigit = num%10;
    int smallnumber = num/10;
    
    string input = keys(lastdigit);
    
    for (int i = 0; i<input.size(); i++)
    {
        helper(smallnumber, input[i] + out);
    }
    
    
    
    
}
void printKeypad(int num){
    
    string out = "";
    helper(num, out);
    
}
