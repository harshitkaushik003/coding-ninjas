#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

vector<int> BFS(int **edges, int n, int s, bool *visited){
    queue<int> q;
    vector<int> ans;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int curr = q.front();
        ans.push_back(curr);
        q.pop();
        
        for(int i=0; i<n; i++){
          if (!visited[i] && edges[curr][i] == 1 && i != curr)
            {
                visited[i] = true;
                q.push(i);
                // ans.push_back(i);
            }
        }

    }

    return ans;

}
vector<vector<int>> all_conn(int **edges, int n){
    bool *visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        vector<int> v1;
        if(!visited[i]){
            v1 = BFS(edges, n,i, visited);
            v.push_back(v1);
        }
    }

    return v;
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

    vector<vector<int>> components = all_conn(edges, n);
    for (int i = 0; i < components.size(); i++) {
      sort(components[i].begin(),
           components[i].end()); // sorting individual vectors
      for (int j = 0; j < components[i].size(); j++) {
        cout << components[i][j] << " ";
      }
      cout<<endl;
    }
}