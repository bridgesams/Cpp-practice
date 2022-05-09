/*Dumbass way I'm sure but whatever*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,c=0,f=1;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==1)
    {
        for(i=1;i<=10;i++)
        {
            cout<<n<<"*"<<i<<"="<<n*i<<endl;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<"Factorial is: "<<f;
    }
    return 0;
}