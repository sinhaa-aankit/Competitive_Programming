#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

bool check(string s,int k){
  int l = k-1;
  int r = k+1;
  int n = s.length();
  char c = 'b';
  while(l >= 0 || r < n){
    if(l>=0 && s[l] == c){
      c++;
      l--;
      continue;
    }else if(r<n && s[r] == c){
      c++;
      r++; 
      continue;
    }else{
      return 0;
    }
  }
  return 1;
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
    string s; cin>>s;
    int n = s.length();
    int aFound = 0;
    for(int i=0; i<n; i++){
      if(s[i] == 'a'){
        aFound = 1;
        // cout<<i<<" ";
        if(check(s,i)){
          cout<<"YES"<<"\n";
        }else{
          cout<<"NO"<<"\n";
        }
        break;
      }
    }
    if(!aFound){
      cout<<"NO\n";
    }


  }

  
  

}