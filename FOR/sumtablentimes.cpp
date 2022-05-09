#include<iostream>
using namespace std;
int main()
{
    int i,n,z,s=0;
    cin>>n>>z;
    for(i=1;i<=z;i++)
    {
        s=s+n*i;
    }
    cout<<s;
    return 0;
}