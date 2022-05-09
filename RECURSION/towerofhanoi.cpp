#include <bits/stdc++.h>
using namespace std;

void TOH(int n, int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("%d to %d", A,C);
        cout<<'\n';
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    TOH(n,1,2,3);
}