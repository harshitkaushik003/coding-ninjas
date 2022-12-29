int knapsack(int *weights, int *values, int n, int maxWeight)
{
	//write your code here
	if(n==0 || maxWeight == 0){
		return 0;
	}
	if(weights[0] > maxWeight){
          return knapsack(weights + 1, values + 1, n - 1, maxWeight);
        }
	int x = knapsack(weights+1, values+1, n-1,maxWeight); //not included
	int y = knapsack(weights+1, values+1, n-1, maxWeight-weights[0]) + values[0];

	return max(x,y);
}