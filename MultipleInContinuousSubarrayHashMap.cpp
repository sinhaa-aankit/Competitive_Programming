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
  // Input
  // [23,2,4,6,7]
  // 6
  char c; cin>>c;
  string s; cin>>s;
  int k; cin>>k;

  int n = s.length();
  int mod;
  s.pop_back();

  vector <int> tokens;
      
  // stringstream class check1
  stringstream var_ss(s);
    
  string temp;
    
  // Tokenizing w.r.t. space ' '
  while(getline(var_ss, temp, ','))
  {
      tokens.push_back( stoi(temp) );
  }
  unordered_map<int, int> m;
  m[0] = -1;
  bool found = false;
  int sum = 0;
  for(int i=0; i<tokens.size(); i++){
    if(k != 0){
      sum += tokens[i];
      mod = sum%k;
      if(m.find(mod) != m.end()){
        if( (i - m[mod]) > 1){
          found = true;
          break;
        }
      }
      else{
        m[mod] = i;
      }
    }else{
      if(tokens[i] == 0 && i<tokens.size()-1 && tokens[i+1] == 0){
        found = true;
        break;
      }
    }
  }

  if(found) cout<<"TRUE";
  else cout<<"FALSE";



}