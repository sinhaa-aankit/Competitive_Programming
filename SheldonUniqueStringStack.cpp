
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
  string s;
    while(cin>>s){
      bool isPresent[26] = {0};

      int lastIndex[26] = {0};

      for(int i=0; i<s.length(); i++){
          lastIndex[s[i]-'a'] = i;
      }
      stack<int> st;
      for(int i=0; i<s.length(); i++){
        if(!isPresent[s[i]-'a']){
          while(!st.empty() && st.top() > s[i] && lastIndex[st.top()-'a'] > i){
            isPresent[st.top()-'a'] = 0;
            st.pop();
          }
          st.push(s[i]);
          isPresent[s[i] - 'a'] = 1;
        }
      }
      int k = st.size();
      char* arr = new char[k+1];
      arr[k--] = '\0';
      while(!st.empty()){
        arr[k--] = st.top();
        st.pop();
      }
      cout<<arr<<"\n";
      delete[] arr;
    }
  
    
}