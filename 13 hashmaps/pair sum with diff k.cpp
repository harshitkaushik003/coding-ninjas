#include <unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k) {
	// Write your code here
    unordered_map<int, int> mp;
    int count=0;
 	for(int i=0; i<n; i++){
        if(mp.count(arr[i]) == 0){
            mp[arr[i]] = 1;
        }else{
            mp[arr[i]] += 1;
        }
    }
    
    for(int i=0; i<n; i++){
        if(mp.count(arr[i] - k)){
            count = count + mp[arr[i] - k];
        }
        
        if(k==0){
            mp[arr[i]]--;
            count--;
        }
    }
    return count;
}