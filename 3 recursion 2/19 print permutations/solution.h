#include <iostream>
#include <string>
using namespace std;

void helper(string input, string output)
{
    if (input.length() == 0)
    {
        cout<<output<<endl;
        return;
    }
    
    for (int i=0; i<input.size(); i++)
    {
        char s = input[i];
        
        string left_substr = input.substr(0,i);
        string right_substr = input.substr(i+1);
        string rest = left_substr + right_substr;
        helper(rest , output+s);
    }
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    
    string output = "";
    helper(input,output);
}
