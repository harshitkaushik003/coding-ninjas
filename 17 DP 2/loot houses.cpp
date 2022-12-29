int maxMoneyLooted(int *arr, int n)
{
	//Write your code here
	int *ans = new int[n];
	ans[0] = arr[0];
	ans[1] = arr[1];

	for(int i=2; i<n; i++){
		ans[i] = max(ans[i-1], ans[i-2] + arr[i]);
	}
	return ans[n-1];
}
