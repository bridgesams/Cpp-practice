#include <iostream>
using namespace std;
int main()
{
    int n,x,c=0,i,k;
    cin>>x>>n;
    while(c!=n)
    {
        k=0;
        x++;
        for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            k++;
        }
        if(k==0)
        {
            cout<<x<<'\n';
            c++;
        }
    }
    return 0;
}