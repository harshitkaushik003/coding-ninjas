#include <iostream>
#include <vector>
using namespace std;
vector<int> getPath(int **edges, int n, bool *visited, int v1, int v2){
    // vector<int> path;
    // if(v1==v2){
    //     path.push_back(v1);
    //     return path;
    // }

    // for(int i=0; i<n; i++){
    //     if(i == v1){
    //         continue;
    //     }
    //     if(visited[i]){
    //         continue;
    //     }

    //     if(edges[v1][i] == 1){
    //         visited[i] = true;
    //         path = getPath(edges , n, visited, i, v2);
    //         if(path.size()){
    //             path.push_back(v1);
    //             return path;
    //         }
    //     }
    // }
    // return path;
    vector<int> path;
    if (v1 == v2) {
      path.push_back(v1);
      return path;
    }
    for (long long i = 0; i < n; i++) {
      if (i == v1)
        continue;
      if (visited[i])
        continue;
      if (edges[v1][i]) {
        visited[i] = true;
        path = getPath(edges, n, visited, i, v2);
        if (path.size()) {
          path.push_back(v1);
          return path;
        }
      }
    }
    return path;
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
    visited[v1] = true;
    vector<int> v;
    v = getPath(edges, n, visited, v1, v2);
    if(v.size()){
        for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        }
    }
   
    
}