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
  
  string s; cin>>s;
  int n = s.length();
  int maxm = 1;

  vector<int> arr(n);
  int k = 0;
  int cnt = 1;

  for(int i=1; i<n; i++){
    if(s[i] != s[i-1]){
      arr[k++] = cnt;
      cnt = 1;
    }else{
      cnt++;
      maxm = max(cnt, maxm);
    }
  }
  arr[k++] = cnt;
  int ans = 0;
  for(int i=0; i<k; i++){
    ans += (maxm - arr[i]);
  }
  cout<<ans;


}