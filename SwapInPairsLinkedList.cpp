
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

class node{
public:
  int data;
  node* next;

  node(int val){
    data = val;
    next = NULL;
  }
};


void insertAtTail(node* &head, int val){

  node* n = new node(val);

  if(head == NULL){
    head = n;
    return;
  }

  node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = n;

}

void display(node* head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

void swap(node* &one, node* &two){
  int t = one->data;
  one->data = two->data;
  two->data = t;
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
  int n,k;
  cin>>n;
  int temp_val;
  cin>>temp_val;
  node* head = new node(temp_val);
  for(int i=1; i<n; i++){
    cin>>temp_val;
    insertAtTail(head, temp_val);
  }
  node* temp = head;
  while(temp != NULL && temp->next!=NULL){
    swap(temp->data, temp->next->data);
    temp = temp->next->next;
  }
  display(head);
  
    
}