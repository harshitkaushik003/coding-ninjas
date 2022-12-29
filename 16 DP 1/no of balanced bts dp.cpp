int balancedBTs(int n) {
    // Write your code here
    long long int *ans = new long long int[n+1];
    if(n<=1){
        return 1;
    }

    ans[0] = 1;
    ans[1] = 1;
    int mod = 1e9+7;
    for(int i=2; i<n+1; i++){
        long long int temp1 = ans[i-1] * ans[i-1];
        temp1 = temp1%mod;
        long long int temp2 = 2 * ans[i-2] * ans[i-1];
        temp2 = temp2%mod;
        ans[i] = (temp1+temp2)%mod;
    }

    return ans[n];
}