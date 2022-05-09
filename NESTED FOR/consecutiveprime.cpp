#include <iostream>
using namespace std;
int main()
{
    int m,n,j,i,c1,c2,f=0;
    cin>>m>>n;
    if(m>n)
    {
        swap(m,n);
    }
    if(m%2==0)
    m++;
    for(i=m,j=m+2;i<=n && j<=n;i+=2,j+=2)
    {
        c1=0;
        c2=0;
        for(int k=1;k<=i/2;k++)
        {
            if(i%k==0)
            c1++;
        }
        for(int k=1;k<=j/2;k++)
        {
            if(j%k==0)
            c2++;
        }
        if(c1==1 && c2==1)
        {
            f++;
            cout<<i<<" & "<<j<<endl;
        }
    }
    if(f==0)
    cout<<"No consecutive prime numbers in the given range!";
    return 0;
}