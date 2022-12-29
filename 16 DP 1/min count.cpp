#include<climits>
#include <math.h>
int minCount(int n)
{
	//Write your code here
	if(sqrt(n) - floor(sqrt(n)) == 0){
		return 1;
	}

	int *ans = new int[n+1];

	ans[0] = 0;
	ans[1] = 1;

	for(int i=2; i<n+1; i++){
		ans[i] = INT_MAX;
		for(int j=1; (j*j) <= i; j++){
			ans[i] = min(ans[i], ans[i-(j*j)]);
		}
		ans[i]++;
	}
	return ans[n];
	// if(n==0 || n==1 || n==2 || n==3){
	// 	return n;
	// }

	// int val = n;
	// for(int i=1; (i*i)<=n; i++){
	// 	val = min(val, 1+ minCount(n - (i*i)));
	// }
	// return val;
}