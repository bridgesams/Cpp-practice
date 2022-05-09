#include <bits/stdc++.h>
using namespace std;
int func(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int notFib=1,notGP=1,notAP=1,temp;

        temp=arr[n-1]-arr[n-2];
        for(int i=0;i<n-2;i++){
            if(arr[i+1]-arr[i]!=temp){
                notAP=0;
                break;
            }
        }
    if(notAP==1)
    return arr[n-1]+temp;

        for(int i=2;i<n-1;i++){
            if(arr[i]!=arr[i-1]+arr[i-2]){
                notFib=0;
                break;
            }
        }
    if(notFib==1)
    return arr[n-1]+arr[n-2];

    temp=arr[n-1]/arr[n-2];
    for(int i=0;i<n-2;i++){
        if(arr[i+1]/arr[i]!=temp){
            notGP=0;
            break;
        }
    }
    if(notGP==1)
    return arr[n-1]*temp;

    return -999;
}

int main(){
    cout<<func();
}