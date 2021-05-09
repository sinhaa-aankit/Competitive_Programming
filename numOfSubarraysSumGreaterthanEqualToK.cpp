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


int findCnt(int arr[], int n, int k)
{
    // Variable to store final answer
    int ans = 0;
  
    // Loop to find prefix-sum
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];
        if (arr[i] >= k)
            ans++;
    }
  
    if (arr[0] >= k )
        ans++;
  
    // Sorting prefix-sum array
    sort(arr, arr + n);
  
    // Loop to find upper_bound
    // for each element
    for (int i = 0; i < n; i++)
        ans += n - 
       (upper_bound(arr, arr + n, arr[i] + k-1) - arr);
  
    // Returning final answer
    return ans;
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
  int k; cin>>k;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }   
  cout<<findCnt(a,n,k);
	
	
}