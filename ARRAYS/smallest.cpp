#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int i,a[10],small=INT_MAX;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        if(small>a[i])
        small=a[i];
    }
    cout<<"Smallest: "<<small;
    return 0;
}