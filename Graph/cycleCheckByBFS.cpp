#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

class Solution{
public:
  bool cycleCheckByBFS(int v, vector<int> adj[]){
    // vector<int> bfs;
    vector<int> vis(v+1, 0);

    for(int i=1; i<= v; i++){
      if(!vis[i]){
        queue< pair<int, int> > q;
        q.push({i,-1});
        vis[i] = 1;
        while(!q.empty()){
          int node = q.front().first;
          int cameFrom = q.front().second;
          q.pop();
          // bfs.push_back(node);

          for(auto it : adj[node]){
            if(!vis[it]){
              q.push( {it, node} );
              vis[it] = 1;
            }else{
              if(it != cameFrom){
                return true;
              }
            }
          }
        }
      }
    }
    return false;
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

  bool isVisited[n+1] = {0};

  for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  Solution s;
  cout<< s.cycleCheckByBFS(n, adj);

}