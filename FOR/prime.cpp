#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==1)
    cout<<"Prime";
    else
    cout<<"Not Prime";
    return 0;
}