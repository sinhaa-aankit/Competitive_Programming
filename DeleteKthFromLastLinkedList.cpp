
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
  cin>>n>>k;
  int temp;
  cin>>temp;
  node* head = new node(temp);
  for(int i=1; i<n; i++){
    cin>>temp;
    insertAtTail(head, temp);
  }
  node* ptrOne = head;
  node* ptrScnd = head;

  for(int i=0; i<k; i++){
    ptrScnd = ptrScnd->next;
  }

  while(ptrScnd->next != NULL){
    ptrScnd = ptrScnd->next;
    ptrOne = ptrOne->next;
  }

  ptrOne->next = ptrOne->next->next;

  display(head);
  
    
}