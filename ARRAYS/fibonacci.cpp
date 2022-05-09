#include <iostream>
using namespace std;
int main()
{
    int a[20],i,c;
    a[0]=1;
    a[1]=1;
    for(i=2;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<"Fibonacci series: ";
    for(i=0;i<20;i++)
    cout<<a[i]<<'\n';
    return 0;
}