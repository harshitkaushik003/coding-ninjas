#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void getPath(int **edges, int n, bool *visited, int v1, int v2){
    queue<int> q;
    unordered_map<int, int> mp;
    q.push(v1);
    visited[v1] = true;

    while(!q.empty()){
        for(int i=0; i<n; i++){
            if(i == q.front()){
                continue;
            }

            if(visited[i]){
                continue;
            }

            if(edges[q.front()][i]){
                q.push(i);
                mp[i] = q.front();
                visited[i] = true;
            }
        }
        q.pop();
    }

    if(!visited[v2])
        return;
    int i = v2;
    cout<<v2<<" ";
    while(i != v1){
        cout<<mp[i]<<" ";
        i = mp[i];
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
    int v1, v2;
    cin >> v1 >> v2;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++) {
      visited[i] = false;
    }
    getPath(edges, n, visited, v1, v2);
}