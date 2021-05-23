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

int length = 0;

int printAllSubsetsRec(int arr[], int n, vector<int> v, int sum,int k)
{
    if (sum % k == 0) {
        // for (auto x : v)
        //     cout << x << " ";
        // cout << endl;
        length = v.size();
    }
    if (n == 0)
        return -1;

    int len1 = printAllSubsetsRec(arr, n - 1, v, sum,k);
    v.push_back(arr[n - 1]);
    int len2 = printAllSubsetsRec(arr, n - 1, v, sum + arr[n - 1],k);

    return max(len1,len2);
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
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  int sum = 2;
  int k = 4;
  vector<int> v;
  printAllSubsetsRec(a, n, v, sum,k);
  cout<<length;
  
    
}