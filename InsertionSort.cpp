#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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

void swapt(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

void selectionSort(int arr[], int n){
  int min_idx;
  for(int i=0; i<n; i++){
    min_idx = i;
    for(int j = i+1; j<n; j++){
      if(arr[j] < arr[i]) min_idx = j;
    }
    swapt(&arr[i], &arr[min_idx]);
  }
}

void bubbleSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    // cout<<i<<" "<<n-i-1<<"\n";
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]) swapt(&arr[j], &arr[j+1]);
    }
  }
}

void insertionSort(int arr[], int n){
  for(int i=0; i<n; i++){
    int key = arr[i];
    int j = i-1;
    while(arr[j] > key && j >=0){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
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

  int n; cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  insertionSort(arr,n);

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  
    
}