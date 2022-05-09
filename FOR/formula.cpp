#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i,n,x;
    double k=0.0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        k=k+(1.0/i)*pow(((x+1.0)/x),i);
    }
    cout<<k;
}