#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

void sorting(pair<int, int> arr[], int n){
  for(int i=0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if((arr[i].first / arr[i].second) < (arr[j].first / arr[j].second)){
        swap(arr[i], arr[j]);
      }
    }
  }
}


int fractionalKnapsack(pair<int, int> arr[], int n, int maxCapacity){
  double ans = 0;
  for(int i=0; i<n; i++){
    if(arr[i].second <= maxCapacity){
      ans += arr[i].first;
      maxCapacity -= arr[i].second;
    }
    else{
      ans += arr[i].first*( (double) maxCapacity/arr[i].second);
      break;
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
  int n,maxCapacity; cin>>n;
  pair<int, int> arr[n];
  int a,b;
  for(int i=0; i<n; i++){
    cin>>a>>b;
    arr[i].first = a;
    arr[i].second = b;
  } 
  sorting(arr, n);
  cin>>maxCapacity;
  // for(int i=0; i<n; i++){
  //   cout<<arr[i].first<<" "<<arr[i].second<<"\n";
  // }
  cout<<fractionalKnapsack(arr, n, maxCapacity);

  

}