#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

class node{
public:
  int data;
  node* left;
  node* right;
  node(int val){
    data = val;
    left = right = NULL;
  }
};

node* CreateTree(){
  int data;
  cin>>data;
  if(data == -1) 
    return NULL;
  node* root = new node(data);
  root->left = CreateTree();
  root->right = CreateTree();
  return root;

}

int sum(node* root){
  if(root == NULL) return 0;
  return root->data + sum(root->left) + sum(root->right);
}

node* FindNode(node* root, int x){
  return NULL;
}



void deleteroot(node* &root){
  if(root == NULL) return;

  deleteroot(root->left);
  deleteroot(root->right);
  delete root;
  return;
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
  //int N,n,x; cin>>N>>n>>x;
  //node* root = CreateTree();
  int n; cin>>n;
  int ans = 0;
  int temp;
  for(int i=0; i<n; i++){
    cin>>temp;
    ans ^= temp;
    ans ^= i;
  }
  ans ^= n;
  cout<<ans;

  //deleteroot(root);

}