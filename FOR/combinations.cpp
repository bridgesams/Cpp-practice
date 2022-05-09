#include<iostream>
using namespace std;
int main()
{
    int c,f=1,f1=1,f2=1,n,r,i;
    cin>>n>>r;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=1;i<=r;i++)
    {
        f1=f1*i;
    }
    for(i=1;i<=n-r;i++)
    {
        f2=f2*i;
    }
    c=(f)/(1.0*f1*f2);
    cout<<c;
    return 0;
}