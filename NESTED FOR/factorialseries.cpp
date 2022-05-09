#include<iostream>
using namespace std;
int main()
{
    int i,j,f,sum=0;
    for(i=1;i<=10;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
        f=f*j;
        }
        sum=sum+f;
    }
    cout<<sum;
    return 0;
}