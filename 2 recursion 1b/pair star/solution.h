// Change in the given string itself. So no need to return or print the changed string.
#include <string.h>
void pairStar(char input[]) {
    // Write your code here
    
    if (input[0] == '\0' || input[1] == '\0')
    {
        return;
    }
    
    pairStar(input+1);
    
    if (input[0] == input[1])
    {
        for (int i = strlen(input); i>0; i--)
        {
            input[i+1] = input[i];
        }
        
        input[1] = '*';
    }
    
    return;

}