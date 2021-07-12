#include<bits/stdc++.h>
using namespace std;

bool board[10][10];

bool isSafe(int r, int c,int n){
  for(int i=0; i<c; i++){
    if(board[r][i]){
      return false;
    }
  }
  for(int i=r,j=c; i>=0 && j>=0; i--,j--){
    if(board[i][j])
      return false;
  }
  for(int i=r,j=c; i<n && j>=0; i++,j--){
    if(board[i][j])
      return false;
  }
  return true;
}

bool solveRec(int col, int n){
  if(col == n){
    return true;
  }
  for(int i=0; i<n; i++){
    if(isSafe(i,col,n)){
      board[i][col] = 1;
      if(solveRec(col+1, n)){
        return true;
      }
      board[i][col] = 0;
    }
  }
  return false;
}

bool nQueen(int n){
  if(solveRec(0,n) == false)
    return false;
  else
    return true;
}

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
  int n; cin>>n;
  if(nQueen(n)){
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout<<board[i][j]<<" ";
      }
      cout<<"\n";
    }
  }
}