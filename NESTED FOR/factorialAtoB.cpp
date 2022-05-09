#include <iostream>
using namespace std;
int main()
{
    int i,j,f,a,b;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        cout<<f<<endl;
    }
    return 0;
}