#include <iostream>
using namespace std;
int main()
{
    int count=1,n=1,temp,s;
    while(count<5)
    {
        s=0;
        temp=n;
        for(int i=1;i<=temp/2;i++)
        {
            if(temp%i==0)
            s=s+i;
        }
        if(s==n)
        {
            cout<<n<<'\n';
            count++;
        }
        n++;
    }
}