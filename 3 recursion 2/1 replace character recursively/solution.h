#include <string.h>
/*void helper(char s[], int start, char c1, char c2)
{
    if (s[start] == '\0')
    {
        return;
	}
    
    
    if (s[start] == c1)
    {
        s[start] = c2;
        helper(s,start+1,c1,c2);
    }
    
    else{
        return helper(s,start+1,c1,c2);
    }
}*/
void replaceCharacter(char input[], char c1, char c2) {
    
   // helper(input,0,c1,c2);
 	if(input[0] == '\0')
        return;
    
    if(input[0] == c1){
        input[0] = c2;
    }
    
    replaceCharacter(input+1, c1, c2);
}