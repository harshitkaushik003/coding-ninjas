#include <string>
using namespace std;

int atoi(char a)
{
    return a-'0';
}

char itoa(int i)
{
    return 'a' + i -1;
}


int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    
    if (input.size() == 0)
    {
        output[0] = " ";
    	return 1;
    }
    
    if (input.size() == 1)
    {
        output[0] = output[0] + itoa(atoi(input[0]));
        return 1;
    }
    
	string result1[10000], result2[10000];
    
    int smalloutput1 = getCodes(input.substr(1),result1);
    int smalloutput2 = 0;
    
    if (input.size()>1)
    {
        if(atoi(input[0])*10+atoi(input[1])>10&&atoi(input[0])*10+atoi(input[1])<27)
        {
            smalloutput2=getCodes(input.substr(2),result2);
        }
    }
    
    for (int i=0; i<smalloutput1; i++)
    {
        output[i] = itoa(atoi(input[0])) + result1[i];
    }
    
    for (int i=0; i<smalloutput2;i++)
    {
        output[i+smalloutput1] = itoa(atoi(input[0])*10 + atoi(input[1])) + result2[i];
    }
    
    return smalloutput1 + smalloutput2;
}

