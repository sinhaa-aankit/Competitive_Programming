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


class School{
public:
  string name; 
  string place;
  int maxStudent;


  //method with parameters
  void maxStudents(int number){
    maxStudent = number;
  }

  void display(){
    cout<<name<<"\n"<<place<<"\nMaximum Students = "<<maxStudent;
  }
  void displayName();


private:
  string LibraryBooks;

};

// Method/function definition outside the class
void School::displayName() {
  cout << "\nDisplayed from outside the class - "<<name;
}


class Students{
public:
  string name;
  string standard;
  int age;

  //Constructor
  Students(string name,string standard, int age){

    //this-> refers to the upper defined name outside from function.
    this->name = name;
    this->standard = standard;
    this->age = age;
  }
  void display(){
    cout<<name<<"\n"<<"Class - "<<standard<<"\nAge - "<<age;
  }

private:
  int dues;

};


int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

  //code goes down here
  School s;
  s.name = "Bal Bharti Public School";
  s.place = "Bherwa";
  s.maxStudents(200);

  s.display();
  // s.displayName();

  cout<<"\n\n";

  Students st("PARI", "U.K.G", 6);
  st.display();

  
}