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

node* createTree(vector<int> &v){
  if(v.size() == 0) return NULL;

  node* root = new node(v[0]);

  queue<node*> q;
  q.push(root);

  int i = 1;

  while(!q.empty() && i<v.size()){
    node* temp = q.front();
    q.pop();
    temp->left = new node(v[i++]);
    q.push(temp->left);

    if(i>=v.size())
      break;

    temp->right = new node(v[i++]);
    q.push(temp->right);

    if(i>=v.size())
      break;
  }

  return root;

}

int sum(node* root){
  if(root == NULL) return 0;
  return root->data + sum(root->left) + sum(root->right);
}

int countSubtrees(node* &root, int x){

  if(root == NULL)
    return 0;

  int ans = 0;

  if(sum(root) == x){
    ans = 1;
  }

  ans += countSubtrees(root->left, x);
  ans += countSubtrees(root->right, x);

  return ans;

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
  int t; cin>>t;
  while(t--){
    string s,T;
    vector<int> v;

    cin.ignore();
    getline(cin,s);
    stringstream X(s);
 
    while (getline(X, T, ' ')) {
        v.push_back(stoi(T));
    }
    int x ; cin>>x;

    node* root = createTree(v);

    cout<<countSubtrees(root, x)<<"\n";

    deleteroot(root);

  }

}