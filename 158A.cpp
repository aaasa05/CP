#include<iostream>
using namespace std;
int main(){
int n,k,count=0;
cin>>n>>k;
int a[n];
if(n<=50 && n>=k){
for(int i=0;i<n;i++){
  cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]>=a[k-1] && a[i]>0){
    	count++;
    }
  }
}
cout<<count;
	return 0;
}