#include <iostream>
#include <queue>
using namespace std;
bool hasPath(int **edges, int n, int s,int e, bool *visited){
    if(s>=n || e>=n){
        return false;
    }
    if(s==e){
        return true;
    }
    if(edges[s][e] || edges[e][s]){
        return true;
    }

    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        for(int i=0; i<n; i++){
            if(i==q.front()){
                continue;
            }

            if(visited[i]){
                continue;
            }

            if(edges[q.front()][i] == 1){
                q.push(i);
                visited[i] = true;
            }
        }
        q.pop();
        if(visited[e]){
            return true;
        }
    }
    return false;
}
int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    int **edges = new int* [n];
    for(int i=0; i<n; i++){
        edges[i] = new int[n];
        for(int j=0; j<n; j++){
            edges[i][j] = 0;
        }
    }

    for(int i=0; i<e; i++){
        int f,s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    int v1, v2;
    cin>>v1>>v2;
    bool *visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    if(hasPath(edges,n,v1, v2,visited)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }


}