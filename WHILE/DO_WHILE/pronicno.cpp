#include <iostream>
using namespace std;
int main()
{
    int i,n,f=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(i*(i+1)==n)
        {
            f=1;
            cout<<i<<','<<i+1;
        }
    }
    if(f==0)
    cout<<"no";
    return 0;
}