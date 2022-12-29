#include <unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    // Write your code here
    unordered_map<int,int> mp;
    int sum = 0;
    int length=0;
    for(int i=0; i<n; i++){
    	sum += arr[i];
        if(arr[i] == 0 && length == 0){
            length = 1;
        }
        if(sum == 0){
            length = i+1;
        }
        if(mp.count(sum) > 0){
            length = max(length, i - mp[sum]);
        }
        else{
            mp[sum] = i;
        }
    }
    return length;
}