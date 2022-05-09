#include <iostream>
using namespace std;
int main()
{
    int n1,n2,r;
    cin>>n1>>n2;
    r=n1%n2;
    while(r!=0)
    {
        n1=n2;
        n2=r;
        r=n1%n2;
    }
    cout<<n2;
}