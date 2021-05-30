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
#include<fstream>

using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod 1000000007



int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

  //code goes down here
  

  // Create and open a text file - MyFile is like variable for the Test.txt ( created here).
  ofstream MyFile("Test.txt");

  //Write to the file;
  MyFile << "Writing from c++ Program.";
  MyFile << "Writing 2nd Line from c++ Program";
  MyFile << "\nWriting 2nd Line in new Line from c++ Program";

  


  
  
}