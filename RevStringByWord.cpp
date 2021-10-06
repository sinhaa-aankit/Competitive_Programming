#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

int funnn(int a, int b){
  
  if(a>b){
    return a+b;
  }
  else return a+b+funnn(3,b-3);
  return 0;
}

int main(void)
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
  //code goes here
  string s;
  int n = 0;
  vector<string> v;
  while(cin>>s){
      v.push_back(s);
      n++;
  }
  for(int i=n-1; i>=0; i--){
      cout<<v[i];
      if(i != 0) cout<<" ";
  }

}
  