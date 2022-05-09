#include <iostream>
using namespace std;
int main()
{
    int i,n,temp,s=0,s1=0,c=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        s=s+temp%10;
        temp/=10;
    }
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                c++;
            }
            if(c==0)
            {
            temp=i;
            while(temp!=0)
            {
                s1=s1+temp%10;
                temp/=10;
            }
            }
        }
    }
    if(s==s1)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}