#include <string.h>
#include<math.h>
int stringToNumber(char input[]) {
    // Write your code here
    if (input[0] == '\0')
    {
        return 0;
    }
	
    double ans = pow(10,strlen(input)-1)*((int)input[0] - 48) + stringToNumber(input+1);
    return ans;

}