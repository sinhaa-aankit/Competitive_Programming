#include <bits/stdc++.h>
using namespace std;
/*
 * Complete the 'gameOfStones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER n as parameter.
 */

string gameOfStones(int n) {
    if(n%7 == 0 || n%7 == 1) return "Second";
    return "First";
}

int main()
{
    int t; cin>>t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n; cin>>n;

        string result = gameOfStones(n);

        cout << result << "\n";
    }

    return 0;
}