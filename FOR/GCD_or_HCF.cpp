#include <iostream>
using namespace std;
int main()
{
    int n1,n2,smaller,hcf;
    cin>>n1>>n2;
    if (n1>n2)
    smaller=n2;
    else
    smaller=n1;
    for(int i=1;i<=smaller;i++)
    {
        if (n1%i==0 && n2%i==0)
        hcf=i;
    }
    cout<<hcf;
    return 0;
}