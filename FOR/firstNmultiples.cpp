#include <iostream>
using namespace std;
int main()
{
    int n,k,i,sum=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        sum=sum+n*i;
    }
    cout<<sum;
}