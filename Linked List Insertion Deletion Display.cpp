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

class Emp{
private:
  int salary = 50000;
public:
  void showSalary(){
    cout<<salary;
  }
};

class node{
public:
  int data;
  node* next;

  node(int val){
    data = val;
    next = NULL;
  }
};

void InsertAtHead(node* &head, int val){
  node* New = new node(val);
  New -> next = head;
  head = New;
}


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

void insertAtHead(node* &head, int val){
  node* n = new node(val);
  n->next = head;
  head = n;
}

bool searchInLinkedList(node* head, int key){
  node* temp = head;
  while(temp != NULL){
    if(temp -> data == key){
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void deleteAtHead(node* &head){
  node* deleted = head;
  head = head->next;
  delete deleted;
}

void deleteFromLinkedList(node* &head, int val){
  if(head == NULL) return;


  if(head->next == NULL){
    deleteAtHead(head);
    return;
  } 


  node* temp = head;
  while(temp->next->data != val){
    temp = temp->next;
  }
  node* deleted = temp->next;
  temp->next = temp->next->next;

  delete(deleted);
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

  Emp emp;
  // emp.salary = 65000;
  // emp.showSalary();

  node* head = new node(5);

  head -> next = new node(9);

  insertAtTail(head, 4);
  insertAtTail(head, 2);
  insertAtTail(head, 6);
  insertAtHead(head, 12);
  deleteFromLinkedList(head, 2);
  deleteAtHead(head);
  display(head);
  cout<<"\n";
  cout<<searchInLinkedList(head,1);

  
    
}