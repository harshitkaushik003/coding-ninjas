#include <iostream>
using namespace std;
void DFS(int **edges, int n, int s,bool *visited){
    visited[s] = true;
    for(int i=0; i<n; i++){
        if(i==s){
            continue;
        }
        if(visited[i]){
            continue;
        }

        if(edges[s][i] == 1){
            DFS(edges, n, i, visited);
        }
    }
}
bool isConnected(int **edges, int n, bool *visited){
    DFS(edges, n, 0, visited);
    for(int i=0; i<n; i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
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
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++) {
      visited[i] = false;
    }
    if (isConnected(edges, n,visited)) {
      cout << "true" << endl;
    } else {
      cout << "false" << endl;
    }
}