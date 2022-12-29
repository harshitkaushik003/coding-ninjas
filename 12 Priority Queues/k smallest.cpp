#include <queue>
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    vector<int> v;
    priority_queue<int> pq;
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    for(int i=k; i<n; i++){
        int Top = pq.top();
        if(arr[i] < Top){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}