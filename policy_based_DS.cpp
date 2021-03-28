#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;

using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds;

int main(void){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

	pbds arr;
	for(int i=0; i<10; i++){
		arr.insert(i);
	}

	cout<<*arr.find_by_order(0)<<"\n";
	cout<<*arr.find_by_order(1)<<"\n";
	cout<<*arr.find_by_order(2)<<"\n";
	cout<<*arr.find_by_order(9)<<"\n";
	cout<<*arr.find_by_order(10)<<"\n";
	cout<<*arr.find_by_order(15)<<"\n";
	cout<<*arr.find_by_order(20)<<"\n\n";

	// order of key = number of values smaller than given value inside policy based DS array;

	cout<<arr.order_of_key(5)<<"\n";


}