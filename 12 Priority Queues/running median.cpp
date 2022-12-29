#include <queue>
void findMedian(int *arr, int n)
{
    // Write your code here
    priority_queue<int> maxpq;
    priority_queue<int, vector<int> , greater<int>> minpq;
    
    for(int i=0; i<n; i++){
        if(i==0){
            maxpq.push(arr[i]);
        }
        else{
            if(arr[i] < maxpq.top()){
                maxpq.push(arr[i]);
                if(maxpq.size() - minpq.size() > 1){
                    minpq.push(maxpq.top());
                    maxpq.pop();
                }
            }
            else{
                minpq.push(arr[i]);
                if(minpq.size()-maxpq.size()>1){
                    maxpq.push(minpq.top());
                    minpq.pop();
                }
            }
        }
        if((i+1) % 2 == 0){
            cout<<(maxpq.top() + minpq.top())/2<<" ";
        }
        else{
            if(maxpq.size() > minpq.size()){
                cout<<maxpq.top()<<" ";
            }
            else{
                cout<<minpq.top()<<" ";
            }
        }
    }
}