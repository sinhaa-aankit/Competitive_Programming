#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

char NextLetter(char ch1, char ch2){
  char ans;
  ans = ch2 + (ch2-ch1);
  if(ans > 'z'){
    ans = 'a' + ans - 'z'-1;
  }
  return ans;
}

int findNumberOfSuperior(int* arr, int n){
  int ans = 0;
  for(int i=0; i<n; i++){
    int j;
    for(j=i+1; j<n; j++){
      if(arr[i] < arr[j]){
        break;
      }
    }
    if(j == n) ++ans;
  }
  return ans;
}

int replacedCharacter(string p, string s){
  int k=0,n = p.length();
  while(k < s.length()){
    for(int i=0; i<n; i++){
      if(p[i] != s[k+i]){
        return k + i + 1;
      }
    }
    k += n;
  }
  return s.length();
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
    int a,b,c;
    cin>>a>>b>>c;
    int n = (abs(b-a)*2);
    if( (n < a ) || (n < b) || (n < c) ){
      cout<<-1;
    }else{
      if(c - abs(b-a)  > 0 ){
        cout<<(c - abs(b-a));
      } else{
        cout<<(c + abs(b-a));
      } 
    }
    cout<<"\n";
  }
}