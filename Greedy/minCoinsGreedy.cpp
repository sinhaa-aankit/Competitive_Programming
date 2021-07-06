#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

int minCoins(int amount, int coins[]){
  int ans = 0;
    for(int i=0; i<4; i++){
      if(coins[i] <= amount){
        int c = (amount/coins[i]);
        ans += c;
        amount -= (c*coins[i]);
      }
      if(amount == 0)
          break;
    }
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
  int coins[4] = {10,5,2,1};
  int n; cin>>n;
  cout<<minCoins(n, coins);
  // for(int i=0; i<4; i++){
  //   cout<<coins[i]<<" ";
  // }

}