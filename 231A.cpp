#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	if(n>=1 && n<=1000){
		while(n>0){
       int p,v,t,temp=0;
       cin>>p>>v>>t;
       if(p==1){
       	temp++;
       }
       if(v==1){
       	temp++;
       }
       if(t==1){
       	temp++;
       }
       if(temp>=2){
       	count++;
       }
       n--;
   }
}
cout<<count;
return 0;
}