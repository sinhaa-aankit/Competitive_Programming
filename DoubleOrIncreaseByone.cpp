#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007


int minOperation(int k)
{
  vector<int> dp(k + 1, 0);

  for (int i = 1; i <= k; i++) {

    dp[i] = dp[i - 1] + 1;
    
    if (i % 2 == 0) {
      dp[i] = min(dp[i], dp[i / 2] + 1);
    }
  }
  return dp[k]-1;
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
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      cout<<minOperation(n)<<"\n";
  }
  


}
  