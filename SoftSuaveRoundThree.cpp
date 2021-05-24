#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<bitset>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<chrono>
#include<list>
#include<climits>
#include<iomanip>

using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod 1000000007


int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

  //code goes down here 
  int n; cin>>n;
  int m; cin>>m;
  unordered_map<int, int> map1;
  int a[n][m];
  for(int i=0; i<n; i++){
    unordered_set<int> s;
    for(int j = 0; j<n; j++){
      cin>>a[i][j];
      if(s.find(a[i][j]) == s.end()){
        s.insert(a[i][j]);
        map1[a[i][j]]++;
      }
    }
    for(int i : s){
	  	cout<<i<<" ";
	  }
  }
  cout<<"\n";

  int k; cin>>k;


  vector<int> v;
  for(auto p : map1){
    if(p.second >= k) v.push_back(p.first);
  }
  sort(v.begin(), v.end());
  for(int t: v){
    cout<<t<<" ";
  }
  
    
}