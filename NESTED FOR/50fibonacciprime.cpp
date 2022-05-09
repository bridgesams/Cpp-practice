#include <iostream>
using namespace std;
int main()
{
    int x,y,c,i,j,z;
    cin>>x>>y;
    for(i=1;i<=20;i++)
    {
        c=0;
        for(j=1;j<=x/2;j++)
        {
            if(x%j==0)
            c++;
        }
        if(c==1)
        cout<<x<<endl;
        z=x+y;
        x=y;
        y=z;
    }
}