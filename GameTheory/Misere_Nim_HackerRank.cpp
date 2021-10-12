#include <bits/stdc++.h>

using namespace std;
string misereNim(vector<int> s) {
    int x=0,one=0;
    if(s.size() == 2) return "First";
    for(int i=0; i<s.size(); i++){
        x ^= s[i];
        if(s[i] == 1) one++;
    }
    
    if(s.size()%2 && one == s.size()) return "Second";
    if(!(s.size()%2) && one == s.size()) return "First";
    if(x == 0) return "Second";
    return "First";
    
}

int main()
{
    int t ; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            cin>>s[i];
        }

        string result = misereNim(s);

        cout << result << "\n";
    }

    return 0;
}
