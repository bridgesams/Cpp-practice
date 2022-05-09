#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        cout<<pow(i,i)<<endl;
        else
        cout<<pow(i,1.0/i)<<endl;
    }
}