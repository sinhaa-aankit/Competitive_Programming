#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int marks;
	int scholar;
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//code goes down here

	int n; cin>>n;
	student s[n];

	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].scholar>>s[i].marks;
	}
	for(int i=0;i<n;i++){
		cout<<s[i].name<<" "<<s[i].scholar<<" "<<s[i].marks;
		cout<<endl;
	}
	cout<<endl;

	for(int i=0;i<n-1;i++){
		for(int j=i+1; j<n; j++){

			if(s[j].marks > s[i].marks){
				swap(s[i],s[j]);
			}

			else if(s[i].marks == s[j].marks){
				if(s[j].name < s[i].name){
				swap(s[i],s[j]);
				}

				else if(s[i].name == s[j].name){
					if(s[j].scholar < s[i].scholar){
						swap(s[i],s[j]);
					}

				}

			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<s[i].name<<" "<<s[i].scholar<<" "<<s[i].marks;
		cout<<endl;
	}

	//code till up

}