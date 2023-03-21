#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

int count=0;

for(int i=0;i<n;i++){
        cin>>arr[i];
}
for(int i=0;i<n;i++){
    for(int j=1;j<=arr[i];j++){
        if(arr[i]%j==0){
            count++;
        }
    }
    if(count==3){
    cout<<"Yes"<<"\n";
    count=0;
}
else
    cout<<"No"<<"\n";


count =0;

}
    return 0;
}

