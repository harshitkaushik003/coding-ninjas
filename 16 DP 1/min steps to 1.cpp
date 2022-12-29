#include <climits>
int countMinStepsToOne(int n)
{
	//Write your code here
	if(n==1){
		return 0;
	}
	int a=INT_MAX;
	int b = INT_MAX;
	int c = INT_MAX;
    a = countMinStepsToOne(n-1) + 1;
	if(n%2==0){
        b = countMinStepsToOne(n/2) + 1;
    }
	if(n%3==0){
		c = countMinStepsToOne(n/3) + 1;
	}

	return min(a, min(b,c));

}