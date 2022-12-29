#include <string>
#include<iostream>
using namespace std;

int atoi(char a)
{
    return a-'0';
}

char itoa(int i)
{
    return 'a' + i -1 ;
}


void helper(string input , string output)
{
    if (input.size() == 0)
    {
        cout<<output<<endl;
        return;
    }
    
    char c1 = itoa(atoi(input[0]));
    helper(input.substr(1), output + c1);
    
    int c2 = atoi(input[0]);
    int c3 = atoi(input[1]);
    
    int x = c2 * 10 + c3;
    
    if (x>10 && x<27)
    {
        char c4 = itoa(x);
        helper(input.substr(2), output+c4);
    }
    
    
    
    
    
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    
    string output = "";
    helper(input,output);
}

