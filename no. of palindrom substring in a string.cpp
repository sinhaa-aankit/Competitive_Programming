#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007; 

bool isPalindrome(string str) 
{ 
    int l = 0; 
    int h = str.length() - 1; 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return 0; 
        } 
    } 
    return 1;
} 

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//code goes down here
	
	string s; cin>>s;
	int n = s.length();
	int cnt = 0;
	for (int len = 1; len <= n; len++) 
    {    
        for (int i = 0; i <= n - len; i++) 
        {
            int j = i + len - 1;    
            string str = "";        
            for (int k = i; k <= j; k++) str += s[k];
             
            if(isPalindrome(str)){
            	++cnt;
            }
        }
    }
    cout<<cnt;



	return 0;
}
