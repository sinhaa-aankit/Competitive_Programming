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

int minHelper = 0;
int maxHelper = 0;

void change(unordered_map<int, pair<int,int> > &m, int k,int &min, int &max){

	if(k < min){
		int j = k;
	    m[k].second = 1;
	    if(minHelper == 0){
	    	m[k].first = 0;
	    }else m[k].first = 1;
	    k++;
		while(k<min ){
			if(minHelper == 0){
		    	m[k].first = 1;
		    }else m[k].first = 0;
		    k++;
		}
		if(minHelper == 0) minHelper = 1;
	    else minHelper = 0;
		min = j;
	}
	else if(k > max){
		int j = k;
		m[k].second = 1;
		if(maxHelper == 0){
	    	m[k].first = 0;
	    }else m[k].first = 1;
		k--;
		while(k > max){
			if(maxHelper == 0){
		    	m[k].first = 1;
		    }else m[k].first = 0;
		    k--;
		}
		if(maxHelper == 0)maxHelper = 1;
	    else maxHelper = 0;
		max = j;
	}
	else{
		m[k].second = 1;
		int j = k;
		j--;
		while(j > min && m[j].second == 0){
			if(m[k].first == 0) m[k].first = 1;
			else m[k].first = 0;
		    j--;
		}
		k++;
		while(k < max && m[k].second == 0){
			if(m[k].first == 0) m[k].first = 1;
			else m[k].first = 0;
		    k++;
		}
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
  int n; cin>>n;
  unordered_map<int, pair<int,int> > m;
  // cout<<m[0].first<<" ";
  // cout<<m[0].second;
  int k;
  cin>>k;
  int min = k; int max = k;
  m[k].first = 1;
  m[k].second = 1;
  for(int i=1; i<n; i++){
    cin>>k;
    change(m,k,min,max);
  }   
  ll ans = 0;
  cout<<min<<" "<<max<<"\n";
  for(int i=min; i<=max; i++){
  	cout<<m[i].first<<" ";
  	if(m[i].first == 1) {
  		ans++;
  	}
  }
  cout<<"\n"<<ans;

	
	
}