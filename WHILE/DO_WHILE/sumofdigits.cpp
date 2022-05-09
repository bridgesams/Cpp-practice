#include<iostream>
using namespace std;
int main()
{
    int i,s=0,n;
    cin>>n;
    while(n!=0)
    {
        s=s+n%10;
        n/=10;
    }
    cout<<s;
    return 0;
}