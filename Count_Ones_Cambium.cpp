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


int Counting_Ones(int n, vector<int> &v, int x){
  
  if(x == 0){
    int Count = 0;
    for(int i=0; i<n; i++){
      if(v[i] == 1) Count++;
    }
    return Count;
  }

  vector<int> v2 (n) ;

  for(int i = 1; i<n-1; i++){
    if(v[i-1] == v[i+1]) v2[i] = 1;
    else v2[i] = 0;
  }

  v2[0] = v2[n-1] = 0;

  free(&v);


  return Counting_Ones(n,v2,x-1);
  
}


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
  std::vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  int x; cin>>x;

  cout<<Counting_Ones(n,v,x);
  
}