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
  unordered_map<string, vector<string> > m;
  int n; cin>>n;
  for(int i=0; i<n; i++){
    string s; cin>>s;
    string temp = s;
    sort(temp.begin(), temp.end());
    m[temp].push_back(s);
  }

  for(auto p : m){
    for(int i=0; i<p.second.size(); i++){
      cout<<p.second[i]<<" ";
    }
    cout<<"\n";
  }
    
}