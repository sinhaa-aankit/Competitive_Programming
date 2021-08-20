#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod7 1000000007

int modPow(int input1, int input2, int input3)
{
    int res = 1;
    input1 = input1 % input3;
 
    while (input2 > 0) {
        if (input2 & 1)
            res = (res * input1) % input3;
 
        // y must be even now
        input2 = input2 >> 1;
        input1 = (input1 * input1) % input3;
    }
    return res;
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

  

}