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
  queue<int> q;

  int k; cin>>k;
  int sum = 0;
  while(k!=-1){
    sum += k;
    q.push(k);
    if(q.size() > n){
      sum -= q.front();
      q.pop();
    }
    cout<<( (double)(sum)/q.size() )<<" ";
    cin>>k;
  }
  
  
    
}