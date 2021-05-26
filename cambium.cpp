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

  int arr[3] = {7,5,5};
  int maxSum = 0;

  for(int t = 0; t<15; t++){
    int sum = 0;
      for(int j = 0; j<3; j++){
        sum += ((arr[j]^t)&(arr[j]^t+1)); 
      }

      maxSum = max(sum,maxSum);

  }

  cout<<maxSum<<"\n";

  cout<<(7^10)<<" "<<(7^11)<<"\n";
  cout<<(5^10)<<" "<<(5^11)<<"\n";
  cout<<(5^10)<<" "<<(5^11)<<"\n";

  
    
}