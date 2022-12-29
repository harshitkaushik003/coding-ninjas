#include <iostream>
using namespace std;

void helper(int input[], int n, int output[], int m=0)
{
    if (n==0)
    {
        for (int i=0; i<m; i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    helper(input+1,n-1,output,m);
    int *newoutput = new int [m+1];
    
    int i=0;
    for (;i<m;i++)
    {
        newoutput[i] = output[i];
    }
    
    newoutput[i] = input[0];
    
   
    helper(input+1,n-1,newoutput,m+1);
    
    
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    
    int output[0];
    helper(input,size, output);
    
    
    
}
