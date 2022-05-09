#include <bits/stdc++.h>
using namespace std;

int combination(int n,int r){
    if(r==0||n==r)
    return 1;
    return combination(n-1,r)+combination(n-1,r-1);
}

int main(){
    int N,R;
    cout<<"Enter N and R: ";
    cin>>N>>R;
    cout<<combination(N,R);
}