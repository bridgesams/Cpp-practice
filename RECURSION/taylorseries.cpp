#include <bits/stdc++.h>
using namespace std;

double taylor(int x,int n){
    static double f=1,p=1;
    double r;
    if(n==0)
        return 1;
    r=taylor(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main(){
    int n,x;
    cout<<"Enter value of x: \n";
    cin>>x;
    cout<<"How many terms?\n";
    cin>>n;
    cout<<taylor(x,n);
}