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

class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 
  
void push(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
void insertAfter(Node* prev_node, int new_data) 
{ 
    if (prev_node == NULL) 
    { 
        cout<<"the given previous node cannot be NULL"; 
        return; 
    } 
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = prev_node->next; 
    prev_node->next = new_node; 
} 
  
void append(Node** head_ref, int new_data) 
{ 
    /* 1. allocate node */
    Node* new_node = new Node();
  
    Node *last = *head_ref; 
    new_node->data = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
    while (last->next != NULL) 
        last = last->next; 
  
    last->next = new_node; 
    return; 
} 
  
void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<<" "<<node->data; 
        node = node->next; 
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
	Node* head = NULL; 
      
    append(&head, 6); 
      
    push(&head, 7); 
       
    push(&head, 1); 
      
    append(&head, 4); 
      
    insertAfter(head->next, 8); 
    
    printList(head);
	
}