#include<iostream>

using namespace std;

int main() {
    /*
    #ifndef ONLINEJUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    int test = 0;
    cin>>test;

    while(test--) {
        int n = 0;
        int tempn = 0;
        int count = 0;
        cin>>n;
        tempn = n-1;

        int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<=n/2;i++) {
            arr2[count] = arr[i];
            count++;
            if (tempn > i)
            {
                arr2[count] = arr[tempn];
                count++;
                tempn--;
            }
        }
        for(int i=0;i<n;i++) {
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
        
    }

    return 0;
}
