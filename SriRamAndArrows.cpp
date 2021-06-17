
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<bitset>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<chrono>
#include<list>
#include<climits>
#include<iomanip>

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
  int arrows[n];
  for(int i=0; i<n; i++){
    cin>>arrows[i];
  }
  stack<int> s;

  for(int i=0; i<n; i++){
    
    if(!s.empty() && arrows[i] < 0 && s.top() > 0){
      bool insert = true;
      while(!s.empty() && arrows[i] < 0 && s.top() > 0){

        if(-arrows[i] > s.top()){
          insert = true;
          s.pop();
        }else if(-arrows[i] == s.top()){
          insert = false;
          s.pop();
        }else{
          insert = false;
          break;
        }
      }
      if(insert) s.push(arrows[i]);
      }
      else{
        s.push(arrows[i]);
      }
    }

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }

  
    
}