#include <iostream>
#include <string>
#include <algorithm>
//#include<bits/stdc++.h>

using namespace std;
int main(){

	string s,t;
	cin>>s>>t;
	reverse(t.begin(),t.end());
	if(s==t){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"No"<<"\n";
	}

	return 0;
}
