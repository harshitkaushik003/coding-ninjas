#include <iostream>
#include <queue>
using namespace std;

void print(int **edges, int n, int s){
    if(n==0){
        return;
    }
    bool *visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
    }

    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        for(int i=0; i<n; i++){
            if(i==f){
                continue;
            }

            if(edges[f][i] == 1 && !visited[i]){
                q.push(i) ;
                visited[i] = true;
            }
        }
    }


}
int main() {
    // Write your code here
    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++) {
      edges[i] = new int[n];
      for (int j = 0; j < n; j++) {
        edges[i][j] = 0;
      }
    }

    for (int i = 0; i < e; i++) {
      int f, s;
      cin >> f >> s;
      edges[f][s] = 1;
      edges[s][f] = 1;
    }
    if(e==0){
        for(int i=0; i<n; i++){
            cout<<i<<" ";
        }
    }else{
        print(edges, n, 0);
    }
    
}