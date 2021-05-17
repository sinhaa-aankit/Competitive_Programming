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
  string schoolName = "Bal Bharti Public School"; 
  string schoolPlace;
  int maxStudent;


  //method with parameters
  void maxStudents(int number){
    maxStudent = number;
  }

  void display(){
    cout<<schoolName<<"\n"<<schoolPlace<<"\nMaximum Students = "<<maxStudent;
  }
  void displayName();


private:
  string LibraryBooks;

};

// Method/function definition outside the class
void School::displayName() {
  cout << "\nDisplayed from outside the class - "<<schoolName;
}

class Standard : public School
{
public:
	string standard = "U.K.G";
	
};


class Students : public Standard{
private:
  int dues;

public:
  string name;
  string standard;
  int age;

  //Encapsulation - hiding private var and accessing it by methods or functions;

  //setter
  void setDues(int n){
  	dues = n;
  }

  //getter
  int getDues(){
  	return dues;
  }

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
  // s.schoolName = "Bal Bharti Public School";
  s.schoolPlace = "Bherwa";
  s.maxStudents(200);

  s.display();
  // s.displayName();

  cout<<"\n\n";

  Students st("PARI", "U.K.G", 6);
  st.display();

  //Encapsulation - accessing getter and setter

  st.setDues(150);
  cout<<"\n"<<st.getDues();

  //Displaying the School Name using Inheritance;
  cout<<"\n"<<st.schoolName;
  cout<<"\n"<<st.standard;
}