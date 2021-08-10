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
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int k; cin>>k;
    
    vector< pair<int, int> > v(n);

    for(int i=0; i<n; i++){
      cin>>v[i].first;
      v[i].second = i;
    }
    sort(v.begin(), v.end());

    int moves = 1;

    for(int i=1; i<n; i++){
      if(v[i-1].second + 1 != v[i].second){
        moves++;
      }
    }

    cout << (moves <= k ? "YES" : "NO") << "\n";

  }


}