#include <queue>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int, vector<int>> pq;
    // for(int i=0; i<k; i++){
    //     pq.push(arr[i]);
    // }
    // for(int i=k; i<n; i++){
    //     if(arr[i] > pq.top()){
    //         pq.pop();
    //         pq.push(arr[i]);
    //     }
    // }
    // return pq.top();
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    int ans;
    while(k--){
        //cout<<pq.top()<<endl;
        ans = pq.top();
        pq.pop();
    }
    return ans;
}