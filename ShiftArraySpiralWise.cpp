#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

void shiftMatrix(vector< vector< int> > &mat, int M, int N)
{
    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;
    int prev = mat[0][0];
 
    while (1)
    {
        if (left > right) {
            break;
        }
        for (int i = left; i <= right; i++) {
            swap(mat[top][i], prev);
        }
 
        top++;
 
        if (top > bottom) {
            break;
        }

        for (int i = top; i <= bottom; i++) {
            swap(mat[i][right], prev);
        }
 
        right--;
 
        if (left > right) {
            break;
        }

        for (int i = right; i >= left; i--) {
            swap(mat[bottom][i], prev);
        }
 
        bottom--;
 
        if (top > bottom) {
            break;
        }

        for (int i = bottom; i >= top; i--) {
            swap(mat[i][left], prev);
        }
 
        left++;
    }
    
    mat[0][0] = prev;
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
  int M,N; cin>>M>>N;
  int temp;
  vector<vector<int> >arr;
  for(int i=0; i<M; i++){
    vector<int> v;
    for(int j=0; j<N; j++){
      cin>>temp;
      v.push_back(temp);
    }
    arr.push_back(v);
  }

  shiftMatrix(arr,M,N);

  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }

}