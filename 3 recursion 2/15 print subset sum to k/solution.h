#include <iostream>
using namespace std;
void helper(int input[], int size, int k, int output[], int m=0)
{
    if (size==0)
    {
        if (k==0)
        {
            for (int i=0; i<m; i++)
            {
                cout<<output[i]<<" ";
            }
            cout<<endl;
            return;
        }
        
        return;
    }
    
    helper(input+1,size-1, k, output, m);
    
    int *newoutput = new int [m+1];
    
    int i = 0;
    
    for (;i<m;i++)
    {
        newoutput[i] = output[i];
    }
    newoutput[i] = input[0];
    helper(input+1,size-1,k-input[0],newoutput,m+1);
}


void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int *out = new int [0];
    helper(input,size,k,out);
   
}
