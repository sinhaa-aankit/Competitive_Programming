#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

int check(int a[], int b[], int c[], int n){
  int ans = INT_MAX;
  int first = 0, second = 0, third = 0;
  while(first<n && second<n && third<n){
    if(a[first] <= b[second] && a[first] <= c[third]){
      ans = min( ( max(b[second], c[third]) - a[first] ) , ans);
      first++;
    }
    else if( b[second] <= a[first] && b[second] <= c[third]){
      ans = min( ( max(a[first], c[third]) - b[second] ) , ans);
      second++;
    }else{
      ans = min( ( max(a[first], b[second]) - c[third] ) , ans);
      third++;
    }
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
  int n,k; cin>>n;
  int a[n], b[n], c[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for(int i=0; i<n; i++){
    cin>>b[i];
  }
  for(int i=0; i<n; i++){
    cin>>c[i];
  }
  
  cout << check(a, b, c, n) ;

}