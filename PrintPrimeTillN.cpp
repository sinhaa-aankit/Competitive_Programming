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



void seive(int n){
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  for(int p = 2; p*p <= n; p++){
    if(prime[p] == true){
      for(int i = p*p; i<=n; i+=p) prime[i] = false;
    }
  }
  for(int i=2; i<=n; i++){
    if(prime[i]) cout<<i<<" ";
  }
}

isPrime(int n){
  for(int i=2; i*i<=n; i++){
    if(n%i == 0) return false;
  }
  return true;
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
  seive(n);
  

  
    
}