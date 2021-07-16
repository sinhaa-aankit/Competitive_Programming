#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

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

  int adj[n+1][n+1];

  for(int i = 0; i<n+1; i++){
    for(int j=0; j<n+1; j++){
      adj[i][j] = 0;
    }
  }

  for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    adj[u][v] = 1;
    adj[v][u] = 1;
  }

  for(int i = 1; i<n+1; i++){
    cout<<i << " -> ";
    for(int j=1; j<n+1; j++){
      cout<<adj[i][j]<<" ";
    }
    cout<<"\n";
  }

}