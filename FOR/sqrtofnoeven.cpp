#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(fmod(sqrt(i),2.0)==0)
        cout<<i<<endl;
    }
    return 0;
}