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

typedef unsigned long long ull;

#define ll long long int
// #define ull unsigned long long 
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
  int t; cin>>t;
  while(t--){
    ull n,m; cin>>n>>m;
    ull ans = 0;
    vector<ull> v(n+1, 1);
    for(ull i=2; i<=n; i++){
      ull a = m%i;
      ans += v[a]; 
      for(ull j = a; j<=n; j+=i){
        v[j]++;
      }
    }
    cout<<ans<<"\n";
  }   
	
	
}