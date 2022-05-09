#include <iostream>
using namespace std;
int main()
{
    int i,j,n,c;
    for(i=1;i<=20;i++)
    {
        cin>>n;
        c=0;
        for(j=1;j<=n/2;j++)
        {
            if(n%j==0)
            c++;
        }
        if(c==1)
        cout<<"Prime No.";
        else
        cout<<"Not a Prime No.";
    }
}