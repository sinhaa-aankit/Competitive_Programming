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

void merge(int arr[], int l, int mid, int r){
  int n1 = mid-l+1;
  int n2 = r-mid;
  int a[n1],b[n2];
  for(int i=0; i<n1; i++){
    a[i] = arr[l+i];
  }
  for(int i=0; i<n2; i++){
    b[i] = arr[mid+1+i];
  }
  int i=0,j=0,k=l;
  while(i<n1 && j<n2){
    if(a[i] < b[j]){
      arr[k++] = a[i++];
    }else{
      arr[k++] = b[j++];
    }
  }
  while(i<n1) arr[k++] = a[i++];
  while(j < n2) arr[k++] = b[j++];
}

void mergeSort(int arr[], int l, int r){
  if(l<r){
    int mid = (l+r)/2;
    mergeSort(arr, l , mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, mid, r);
  }
}

int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = low-1;
  for(int j = low; j<high; j++){
    if(arr[j] < pivot){
      i++;
      swapt(&arr[i], &arr[j]);
    }
  }
  swapt(&arr[i+1], &arr[high]);
  return (i+1);
}

void quickSort(int arr[], int low, int high){
  if(low<high){
    int pi = partition(arr,low,high);

    quickSort(arr, low, pi-1);
    quickSort(arr,pi+1, high);
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

  quickSort(arr,0,n-1);

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  
    
}