#include <iostream>
using namespace std;
int main()
{
    int n,small,high,i;
    cin>>n;
    small=n;
    high=n;
    for(i=1;i<=10;i++)
    {
        cin>>n;
        if(n>high)
        high=n;
        if(n<small)
        small=n;
    }
    cout<<small<<" "<<high;
    return 0;
}