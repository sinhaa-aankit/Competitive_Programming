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
  int t; cin>>t;
  while(t--){
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d>>x>>y;

    if(a == c){
      if(x == a){
        if(b > d){
          swap(b,d);
        }
        if( (y > b) && (y < d) ){
          cout<<abs(d-b+2)<<"\n";
        }else{
          cout<<abs(d-b)<<"\n";
        }
      }else{
        cout<<abs(d-b)<<"\n";
      }
    }else if(b == d){
      if(y == b){
        if(a > c){
          swap(a,c);
        }
        if( (x > a) && (x < c) ){
          cout<<abs(c-a+2)<<"\n";
        }else{
          cout<<abs(c-a)<<"\n";
        }
      }else{
        cout<<abs(c-a)<<"\n";
      }
    }else{
      cout<<(abs(c-a) + abs(d-b))<<"\n";
    }

  }

  
  

}