#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int i,a[10],big=INT_MIN;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        if(big<a[i])
        big=a[i];
    }
    cout<<"Biggest: "<<big;
    return 0;
}