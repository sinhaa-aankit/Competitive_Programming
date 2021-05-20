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

class Node{
public: 
  int val;
  int count;
  Node* left;
  Node* right;

  Node(int num1, int num2){
    this->val = num1;
    this->count = num2;
    this->left = this->right = NULL;
  }
};

int addNode(Node* root, int value, int count){
  if(root == NULL){
    root = new Node(value, 0);
    return count;
  }
  else if(root->val < value){
    return root->count + addNode(root, value, count+1);

  }
  else{
    root->count++;
    addNode(root->left, value, count);
  }
  return count;
}


int countSmaller(int arr[], int len){
  set<int> s;
  int ans = 0;
  for(int i = len-1; i >=0; i--){
    s.insert(arr[i]);
    auto it = s.lower_bound(arr[i]);
    ans += distance(s.begin(), it);
  }
  return ans;
}

int countSmaller1(int arr[], int n){
  set<int> s;
  int ans = 0;
  for(int i = n-1; i>=0; i--){
    s.insert(arr[i]);
    auto it = s.lower_bound(arr[i]);
    ans += distance(s.begin(), it);
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
  int t; cin>>t;
  ll ans = 0;
  int n; cin>>n;
  int arr[n];
  for(int j=1; j<=t; j++){

      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      if(j%2 == 0){
        reverse(arr,arr+n);
      }

      ans += countSmaller(arr,n);
     
  }
  cout<<ans;
  
    
}