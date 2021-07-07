#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

int sol[4][4];

bool isSafe(vector<vector<int>> &arr, int n, int m, int i, int j){
  return (i < n && j<m &&arr[i][j] == 1);
}

bool ratInMaze(vector<vector<int>> &arr, int n, int m, int i, int j){
  if(i == n-1 && j == m-1){
    sol[i][j] = 1;
    return true;
  }
  if(isSafe(arr,n,m,i,j) == true){
    sol[i][j] = 1;
    if(ratInMaze(arr, n, m, i+1, j))
      return true;
    else if(ratInMaze(arr, n, m, i, j+1))
      return true;
    sol[i][j] = 0;
  }
  return false;
}

void print(){
  cout<<"\n";
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      cout<<sol[i][j]<<" ";
    }
    cout<<"\n";
  }
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
  int n,m; cin>>n>>m;
  vector< vector<int> > arr;

  for(int i=0; i<n; i++){
    int temp1;
    vector<int> temp;
    for(int j=0; j<m; j++){
      cin>>temp1;
      temp.push_back(temp1);
    }
    arr.push_back(temp);
  }

  if(ratInMaze(arr,n,m,0,0)){
    cout<<"Path Exist";
    print();
  }else{
    cout<<"No Path";
  }

  
  

}