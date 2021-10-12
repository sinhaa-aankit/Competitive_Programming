#include <bits/stdc++.h>

using namespace std;
/*
 * Complete the 'nimbleGame' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY s as parameter.
 */

string nimbleGame(vector<int> s) {
    
    int x = 0;
    for(int i=1; i<(int)s.size(); i++){
        // x ^= s[i];
        if(s[i] % 2) x ^= i;
    }
    // if(x == 0 ) return "Second";
    if(x==0) return "Second";
    return "First";

}

int main()
{
    int t; cin>>t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n; cin>>n;

        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            cin>>s[i];
        }

        string result = nimbleGame(s);

        cout << result << "\n";
    }

    return 0;
}
