#include<iostream>
using namespace std;
int main()
{
    int i,s=0,a,b;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%7==0)
        s=s+i;
    }
    cout<<s;
    return 0;
}