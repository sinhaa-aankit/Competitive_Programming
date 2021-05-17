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

  	char ttt[3][3];
  	int cx = 0,co = 0, wx = 0, wo = 0;
  	int openSpots = 0;
  	for(int i=0; i<3; i++){
  		for(int j=0; j<3; j++){
  			cin>>ttt[i][j];
  			if(ttt[i][j] == 'X') cx++;
  			else if(ttt[i][j] == 'O') co++;
  			else openSpots++;
  		}
  	}

  	

  	for(int i=0; i<3; i++){
  		if(ttt[i][0] == ttt[i][1] && ttt[i][0] == ttt[i][2]){
  			if(ttt[i][0] == 'X') wx++;
  			if(ttt[i][0] == 'O') wo++;
  		}
  	}

  	for(int i=0; i<3; i++){
  		if(ttt[0][i] == ttt[1][i] && ttt[1][i] == ttt[2][i]){
  			if(ttt[0][i] == 'X') wx++;
  			if(ttt[0][i] == 'O') wo++;
  		}
  	}

  	if(ttt[0][0] == ttt[1][1] && ttt[1][1] == ttt[2][2]){
  		if(ttt[0][0] == 'X') wx++;
		if(ttt[0][0] == 'O') wo++;	
  	}
  	if(ttt[0][2] == ttt[1][1] && ttt[1][1] == ttt[2][0]){
  		if(ttt[0][0] == 'X') wx++;
		if(ttt[0][0] == 'O') wo++;	
  	}


  	if(co > cx) cout<<3<<"\n";
  	else if(cx - co > 1) cout<<3<<'\n';
  	else if(cx > co && wx == 1 && wo == 0) cout<<1<<"\n";
  	else if(cx == co && wo == 1 && wx == 0) cout<<1<<"\n";
  	else if(openSpots == 0 && (wx+wo == 0)) cout<<1<<"\n";
  	else if(openSpots == 0 && wx == 2) cout<<1<<"\n";
  	else if(openSpots > 0 && (wx+wo == 0)) cout<<2<<"\n";
  	else cout<<3<<"\n";  


  }

  
}