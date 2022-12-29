int balancedBTs(int n) {
    // Write your code here
    if(n<=1){
        return 1;
    }
    
    int mod = 1e9+7;

    int x = balancedBTs(n-1);
    int y = balancedBTs(n-2);
    
    long long int temp1 = ((long long int)x*x)%mod;
    long long int temp2 = (2 * (long long int)x * y) % mod;
    long long int ans = (temp1 + temp2)%mod;

    

    return ans;
}