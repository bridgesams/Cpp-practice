#include<bits/stdc++.h>
using namespace std;

double taylor(double x, double n){
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return taylor(x,n-1);
}

int main(){
    double x,n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"How many terms? ";
    cin>>n;
    cout<<taylor(x,n);
}