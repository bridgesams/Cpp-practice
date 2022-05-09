#include <iostream>
using namespace std;
int main()
{
    int n,i,j,sum;
    for(i=1;i<=20;i++)
    {
        cin>>n;
        sum=0;
        for(j=1;j<=n/2;j++)
        {
            if(n%j==0)
            sum=sum+j;
        }
        if(sum==n)
        cout<<"Perfect Number"<<endl;
        else
        cout<<"Not a Perfect Number"<<endl;
    }
    return 0;
}