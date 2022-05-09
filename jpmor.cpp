#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> arr){
    std::sort(arr.begin(),arr.end());
    int temp=arr[1]-arr[0];
    int c=0;
    int i=1,j=2;
    cout<<arr[0]<<arr[1]<<"\n";
    while(c==0){
        if(temp==abs(arr[j]-arr[i])){
            cout<<arr[i]<<arr[j]<<"\n";
        }
        else
        c=1;
        i++;
        j++;
    }
}

int main(){
    int n,temp;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    fun(arr);
}