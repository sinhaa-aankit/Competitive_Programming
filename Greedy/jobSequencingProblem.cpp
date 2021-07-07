#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

void sorting(pair<int, int> jobs[], int n){
  for(int i=0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if(jobs[i].second < jobs[j].second){
        swap(jobs[i], jobs[j]);
      }
    }
  }
}

int weightedJobSequencing(pair<int, int> jobs[], int n){
  int arr[n] = {0};

  int ans = 0;

  for(int i=0; i<n; i++){

    if(arr[jobs[i].first-1] == 0){

      arr[jobs[i].first-1] = 1;
      ans += jobs[i].second;

    }else{
      int j = jobs[i].first-1;
      while(j>=0 && arr[j] != 0){
        j--;
      }
      if(j >= 0 ){
        arr[j] = 1;
        ans += jobs[i].second;
      }
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
  pair<int, int> jobs[n];

  for(int i=0; i<n; i++){
    int a,b; cin>>a>>b;
    jobs[i].first = a;
    jobs[i].second = b;
  }

  sorting(jobs,n);

  // for(int i=0; i<n; i++){
  //   cout<<jobs[i].first<<" "<<jobs[i].second<<"\n";
  // }

  cout<<weightedJobSequencing(jobs, n);
  
  

}