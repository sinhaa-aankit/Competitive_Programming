#include<bits/stdc++.h>

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
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  stack<int> s;
  s.push(arr[0]);
  int i = 1;
  int maxm;
  int ans = 0;
  while(i<n){
    if(s.top() > arr[i]){
      s.push(arr[i]);
    }else{
      maxm = arr[i] - s.top();
      ans = max(ans, maxm);
    }
    i++;
  }
  cout<<ans;
    
}