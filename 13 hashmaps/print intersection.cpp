#include <unordered_map>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
    // Write your code here
    unordered_map<int, int> mp;
    if(n > m){
        for(int i=0; i<m; i++){
        	mp[arr2[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(mp.count(arr1[i]) == 1 && mp[arr1[i]] > 0){
                cout<<arr1[i]<<endl;
                mp[arr1[i]]--;
            }
        }
    }else{
        for(int i=0; i<n ;i++){
            mp[arr1[i]]++;
        }
        
        for(int i=0; i<m; i++){
            if(mp.count(arr2[i]) && mp[arr2[i]] > 0){
                cout<<arr2[i]<<endl;
                mp[arr2[i]]--;
            }
        }
    }
}