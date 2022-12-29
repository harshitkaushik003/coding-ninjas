#include <queue>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    queue<int> q;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        q.push(i);
    }
    int time = 0;
    while(!q.empty()){
        int i = q.front();
        int t = arr[i];
        if(i==k && t>=pq.top()){
            time++;
            return time;
        }
        else{
            if(t>=pq.top()){
                time++;
                pq.pop();
                q.pop();
            }
            else{
                q.pop();
                q.push(i);
            }
        }
    }
}