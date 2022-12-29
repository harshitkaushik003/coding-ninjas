#include <climits>
int minCostPath(int **input, int m, int n, int row, int col,int **ans){
	if(row == m-1 && col==n-1){
		return input[row][col];
	}
	if(row >= m || col>=n){
		return INT_MAX;
	}
	if(ans[row][col] != -1){
		return ans[row][col];
	}
	int x = minCostPath(input, m, n, row,col+1,ans);
	int y = minCostPath(input, m, n, row+1, col,ans);
	int z = minCostPath(input, m, n, row+1, col+1,ans);

	int fans = min(x, min(y,z)) + input[row][col];
	ans[row][col] = fans;
	return fans;
}
int minCostPath(int **input, int m, int n)
{
	//Write your code here
	int **ans = new int*[m];
	for(int i=0; i<m; i++){
		ans[i] = new int[n];
		for(int j=0; j<n; j++){
			ans[i][j] = -1;
		}
	}
	return minCostPath(input, m, n, 0, 0,ans);
}