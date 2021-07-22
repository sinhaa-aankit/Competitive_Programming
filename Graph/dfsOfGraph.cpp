#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

class Solution{

  void DFS(int node, vector<int> &vis, vector<int> adj[], vector<int> &dfs){
    dfs.push_back(node);
    vis[node] = 1;
    for(auto it: adj[node]){
      if(!vis[it]){
        DFS(it,vis,adj,dfs);
      }
    }
  }
public:
  vector<int> dfsOfGraph(int v, vector<int> adj[]){
    vector<int> dfs;
    vector<int> vis(v+1, 0);

    for(int i=1; i<= v; i++){
      if(!vis[i]){
        DFS(i, vis, adj, dfs);
      }
    }

    return dfs;
  }

};

int main(void)
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

  //code goes down here
  int n,m; cin>>n>>m;

  vector<int> adj[n+1];

  for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  Solution s;
  vector<int> dfs = s.dfsOfGraph(n, adj);
  for(int i=0; i<dfs.size(); i++){
    cout<<dfs[i]<<" ";
  }

}