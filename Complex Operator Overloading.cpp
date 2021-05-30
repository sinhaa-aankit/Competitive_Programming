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

class Complex{
private:
  int real,imaginary;
public:
  Complex(int r=0, int i=0){real = r; imaginary = i;}

  Complex operator +(Complex const &c1){
    Complex temp;
    temp.real = real + c1.real; 
    temp.imaginary = imaginary + c1.imaginary;
    return temp;
  }

  void print(){
    cout<<real<<" + i"<<imaginary;
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
  Complex c1(3,4),c2(3,4),c4(3,4);
  Complex c3 = c1+c2+c4;
  c3.print();

  // int k = 1;
  // for(int i=0; i<3;i++){
  //   for(int j=0; j<=i; j++){
  //     cout<<k++<<" ";
  //   }
  //   cout<<"\n";
  // }
  // for (int i = 1; i >=0; --i)
  // {
  //   for (int j = i;j>=0; j--)
  //   {
  //     cout<<k++<<" ";
  //   }
  //   cout<<"\n";
  // }


  
  
}