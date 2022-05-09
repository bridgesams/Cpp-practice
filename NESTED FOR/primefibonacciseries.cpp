#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,i,j,f,n,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=0;
        c=a+b;
        a=b;
        b=c;
        for(j=1;j<=c/2;j++)
        {
            if(c%j==0)
            f++;
        }
        if(f==1)
        count++;
    }
    cout<<count<<" prime numbers.";
    return 0;
}