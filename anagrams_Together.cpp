#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

    //code goes down here

    int n; cin>>n;
    string str,tempStr;
    unordered_map <string, list<string> > m;
    
    for(int i=0; i<n; i++ ){
        cin>>str;
        tempStr = str;
        sort(tempStr.begin() , tempStr.end() );
        m[tempStr].push_back(str);
    }
    for(auto temp : m){
        for(auto p: temp.second ){
            cout<<p<<" ";
        }
        cout<<endl;


    }

    return 0;
}