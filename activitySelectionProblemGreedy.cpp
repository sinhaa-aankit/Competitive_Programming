#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

void sorting(pair<int, int> arr[], int n){
  for(int i=0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if(arr[i].second > arr[j].second){
        swap(arr[i], arr[j]);
      }
    }
  }
}

int activitySelectionProblem(pair<int, int> arr[], int n){
  int ans = 1;
  int lastFinishedAsctivty = arr[0].second;
  for(int i=1; i<n; i++){
    if(arr[i].first >= lastFinishedAsctivty){
      ++ans;
      lastFinishedAsctivty = arr[i].second;
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
  int n; cin>>n;
  pair<int, int> arr[n];
  int a,b;
  for(int i=0; i<n; i++){
    cin>>a>>b;
    arr[i].first = a;
    arr[i].second = b;
  } 
  sorting(arr, n);
  
  cout<<activitySelectionProblem(arr, n);

  

}