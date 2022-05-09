#include<iostream>
using namespace std;
int main()
{
    int n,temp,r;
    cin>>n;
    temp=n%10;
    r=temp*1000;
    n=n/10;
    temp=n%10;
    r=temp*100+r;
    n=n/10;
    temp=n%10;
    r=temp*10+r;
    n=n/10;
    r=temp+r;
    cout<<r;
}