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

  vector< pair<int,int> > adj[n+1];

  for(int i=0; i<m; i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    adj[u].push_back({v, wt});
    adj[v].push_back({u,wt});
  }

  for(int i = 1; i<n+1; i++){
    cout<<i << " ->";
    for(int j=0; j<adj[i].size(); j++){
      cout<<" ("<<adj[i][j].first<<" , "<<adj[i][j].second<<") ,";
    }
    cout<<"\n";
  }

}