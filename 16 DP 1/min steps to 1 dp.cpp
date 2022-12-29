#include <climits>

int memo(int n, int *ans){
	if(n == 1){
		ans[n] = 0;
		return 0;
	}

	if(ans[n] != -1){
		return ans[n];
	}

	int x = INT_MAX, y = INT_MAX, z = INT_MAX;
	x = memo(n-1, ans) + 1;
	if(n%2==0){
		y = memo(n/2, ans) + 1;
	}
	if(n%3 == 0){
		z = memo(n/3, ans) + 1;
	}

	int fans = min(x, min(y,z));
	ans[n] = fans;
	return fans;
}

int memohelper(int n){
	int *ans = new int[n+1];
	for(int i=0; i<=n; i++){
		ans[i] = -1;
	}
	return memo(n, ans);
}
int countStepsToOne(int n)
{
	//Write your code here
	//return memohelper(n);

	int *ans = new int[n+1];
	
	ans[0] = 0;
	ans[1] = 0;

    int x = INT_MAX, y = INT_MAX, z = INT_MAX;

	for(int i=2; i<n+1; i++){\
		int x = INT_MAX, y = INT_MAX, z = INT_MAX;
		x = ans[i-1] + 1;
		if(i%2==0){
			y = ans[i/2] + 1;
		}
		if(i%3==0){
			z = ans[i/3] +1;
		}
		int fans = min(x, min(y,z));
		ans[i] = fans;
	}

	return ans[n];
}