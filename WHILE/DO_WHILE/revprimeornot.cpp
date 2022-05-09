#include <iostream>
using namespace std;
int main()
{
    int n,r=0,c=0,rc=0,i;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
    for(i=2;i<=r/2;i++)
    {
        if(r%i==0)
        rc++;
    }
    if(c==0)
    {
        cout<<"Number is Prime ";
        if(rc==0)
        cout<<"and the reverse too.";
        else
        cout<<"but the reverse isn't.";
    }
    else
    {
    if(rc==0)
    cout<<"Number isn't prime and the reverse isn't either.";
    else
    cout<<"Both the reverse and the number aren't prime.";
    }
}