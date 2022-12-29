#include <climits>
#include <bits/stdc++.h>
using namespace std;
int maximumProfit(int arr[], int n) {
    // Write your code here
    
  	int profit = INT_MIN;
 
  	int price = 0;
 
  	sort(arr, arr + n);
 

  	for (int i = 0; i < n; i++)
  	{
 

        int count = (n - i);
 
   
    	if (profit < count * arr[i])
    	{
      	price = arr[i];
      	profit = count * arr[i];
    	}
  	}
 return profit;

}
