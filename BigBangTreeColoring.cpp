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
  if(root == NULL) return NULL;

  if(root->data == x) return root;
  node* left = FindNode(root->left, x);
  node* right = FindNode(root->right, x);

  return (left == NULL?right:left);
}

int CountNodes(node* root){
  if(root == NULL) return 0;

  int left_count = CountNodes(root->left);
  int right_count = CountNodes(root->right);
  return 1 + left_count + right_count;
}

int BigBang(node* root, int x, int n){

  node* t = FindNode(root, x);

  int left = CountNodes(t->left);
  int right = CountNodes(t->right);

  int rem_nodes = n-(left+right)-1;

  if(left > right + rem_nodes) return 1;
  if(right > left+rem_nodes) return 1;
  if(rem_nodes > left + right) return 1;

  return 0;


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
  int N,n,x; cin>>N>>n>>x;
  node* root = CreateTree();

  cout<<BigBang(root, x, n)<<"\n";
  
  deleteroot(root);


}