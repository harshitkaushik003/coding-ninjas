#include<bits/stdc++.h>
using namespace std;
long long staircase(int n){
    long long *ans = new long long[n+1];
    ans[0] = 1;
    ans[1] = 1;
    ans[2] = 2;

    for(int i=3; i<n+1; i++){
        ans[i] = (ans[i-1] + ans[i-2] + ans[i-3]) % 1000000007;
    }
    return ans[n];
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<staircase(n)<<endl;
    }
    return 0;
}