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

#define ll unsigned long long int
#define mod 1000000007; 

ll sum(string s){
    ll sum = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        sum += s[i]-'0';
    }
    return sum;
}

void series(vector<string> &arr){
    for(int i=4; i<25; i++){
        string temp = arr[i-1];
        int j = 0;
        char c = temp[0];
        string s = "";
        while(j < arr[i-1].length()){
            int count = 0;
            
            while(c == temp[j]){
                j++; count++;
            }

            s += to_string(count); s += c;
            c = temp[j]; 
        }
        arr[i] = s;
    }
}

int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    //code goes down here
    ll t; cin>>t;
    ll n = t;
    vector<string> arr(25);
    int a[t];
    while(t--){
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        arr[0] = "0"; arr[1] = "1"; arr[2] = "11"; arr[3] = "21";
        series(arr);
        
    }
    for(int i=0; i<n; i++){
        cout<<sum(arr[a[i]])<<endl;
    }
     


}