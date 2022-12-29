#include <iostream>
#include <queue>
using namespace std;

// void islands(int **edges, int n, int s, bool *visited){
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     while(!q.empty()){
//         for(int i=0; i<n; i++){
//             if(q.front()==s){
//                 continue;
//             }
//             if(visited[i]){
//                 continue;
//             }

//             if(edges[q.front()][i] == 1){
//                 q.push(i);
//                 visited[i] = true;
//             }
//         }
//         q.pop();
//     }
// }

void visitFiller(int **edges, long long v, long long sv, bool *visited) {
  queue<long long> pendingVertices;
  pendingVertices.push(sv);
  visited[sv] = true;
  while (!pendingVertices.empty()) {
    for (long long i = 0; i < v; i++) {
      if (i == pendingVertices.front())
        continue;
      if (visited[i])
        continue;
      if (edges[pendingVertices.front()][i]) {
        pendingVertices.push(i);
        visited[i] = true;
      }
    }
    pendingVertices.pop();
  }
}
int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    
    int **edges = new int*[n];
    for(int i=0; i<n; i++){
        edges[i] = new int [n];
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

    bool *visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false; 
    }

    int count = 0;
    for (long long i = 0; i < n; i++) {
      if (!visited[i]) {
        count++;
        visitFiller(edges, n, i, visited);
      }
    }
    cout<<count<<endl;
}