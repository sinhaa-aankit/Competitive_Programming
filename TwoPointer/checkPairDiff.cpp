#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

bool check(int arr[], int n, int k){
  int left = 0, right = 1;
  while(right < n){
    if(arr[right] - arr[left] == k){
      return true;
    }
    else if(arr[right] - arr[left] > k){
      left++;
    }else{
      right++;
    }
  }
  return false;
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
  int n,k; cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cin>>k;
  
  check(arr, n, k) == 1 ? cout<<"YES" : cout<<"NO";

}