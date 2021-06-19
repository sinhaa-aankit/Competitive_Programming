#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

int x = 5;

int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

  //code goes down here
  int x = 2;
  cout<<x<<"\n";
  //Input - 
  // [-2,-1,2,1]
  // 1
  char c; cin>>c;
  string s; cin>>s;
  int k; cin>>k;

  int n = s.length();
  int mod;
  s.pop_back();

  vector <int> v;
      
  stringstream var_ss(s);
    
  string temp;
    
  // Tokenizing w.r.t. space ','
  while(getline(var_ss, temp, ','))
  {
      v.push_back( stoi(temp) );
  }

  vector<int> prefixSum;
  prefixSum.push_back(0);

  unordered_map<int, int> m;
  int sum = 0;

  for(int i=0; i<v.size(); i++){
    sum += v[i];
    prefixSum.push_back(sum);
  }
  for(int i=0; i<prefixSum.size(); i++){
    m[prefixSum[i]] = i;
  }

  int ans = 0;
  for(int i=0; i<prefixSum.size(); i++){
    if(m.find(k+prefixSum[i]) != m.end()){
      ans = max(ans, (m[k+prefixSum[i]]-i) );
    }
  }

  cout<<ans;


}